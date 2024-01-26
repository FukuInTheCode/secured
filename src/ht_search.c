/*
** EPITECH PROJECT, 2024
** ht_search.c
** File description:
** ht_search.c
*/

#include "my.h"

char *search_el(info_t *info, char *key, int hashed_value,
    info_t *previous)
{
    for (; info; info = info->next) {
        if (my_strcmp(key, info->key) == 0)
            return info->value;
    }
    return NULL;
}

char *ht_search(hashtable_t *ht, char *key)
{
    int hashed_key = 0;
    int id = 0;

    if (!ht || !ht->hash || !key || !ht->table)
        return NULL;
    hashed_key = ht->hash(key, ht->len);
    id = hashed_key % ht->len;
    id *= ((id >= 0) - (id < 0));
    if (!ht->table[id].value)
        return NULL;
    if (my_strcmp(ht->table[id].key, key))
        return search_el(ht->table[id].next, key, hashed_key, ht->table + id);
    if (my_strcmp(ht->table[id].key, key) == 0)
        return ht->table[id].value;
    return NULL;
}
