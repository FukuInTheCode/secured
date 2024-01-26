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

    if (!ht)
        return 84;
    hashed_key = ht->hash(key, ht->len) % ht->len;
    if (ht->table[hashed_value].key)
        return insert_el(ht->table + hashed_key, key, value, hashed_key);
    ht->table[hashed_key].key = my_strdup(key);
    ht->table[hashed_key].value = my_strdup(value);
    ht->table[hashed_key].key_hashed = hashed_key;
    return 0;
}
