/*
** EPITECH PROJECT, 2024
** ht_delete.c
** File description:
** ht_delete.c
*/

#include "my.h"

static int my_free(void *ptr)
{
    free(ptr);
    return 0;
}

static int copy_el(hashtable_t *info1, hashtable_t *info2)
{
    return 0;
}

int ht_delete(hashtable_t *ht, char *key)
{
    int hashed_key = 0;
    int id = 0;

    if (!ht || !ht->hash || !key || !ht->table)
        return 84;
    hashed_key = ht->hash(key, ht->len);
    id = hashed_key % ht->len;
    if (!ht->table[id].value)
        return 84;
    if (my_strcmp(ht->table[id].key, key))
        return delete_el(ht->table[id].next, key, hashed_key);
    ht->table[id].value = my_free(ht->table[id].value);
    ht->table[id].key = my_free(ht->table[id].key);
    ht->table[id].key_hashed = 0;
    return copy_el(ht->table + id, ht->table[id]->next);
}
