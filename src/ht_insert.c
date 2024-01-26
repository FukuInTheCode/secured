/*
** EPITECH PROJECT, 2024
** ht_insert.c
** File description:
** ht_insert.c
*/

#include "my.h"

static int insert_el(info_t *info, char *key, char *value, int hashed_value)
{
    for (; info->next; info = info->next);
    info->next = malloc(sizeof(hashtable_t));
    if (!info->next)
        return 84;
    info->next->key = my_strdup(key);
    info->next->value = my_strdup(value);
    info->next->key_hashed = hashed_key;
    info->next->next = NULL;
    return 0;
}

int ht_insert(hashtable_t *ht, char *key, char *value)
{
    int hashed_key = 0;
    int id = 0;

    if (!ht)
        return 84;
    hashed_key = ht->hash(key, ht->len);
    id = hashed_key % ht->len;
    if (ht->table[id].key)
        return insert_el(ht->table + id, key, value, hashed_key);
    ht->table[id].key = my_strdup(key);
    ht->table[id].value = my_strdup(value);
    ht->table[id].key_hashed = hashed_key;
    return 0;
}
