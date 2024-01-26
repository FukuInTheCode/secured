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

static int delete_el(info_t *info, char *key, int hashed_value,
    info_t *previous)
{
    for (; info; info = info->next) {
        if (previous->next != info)
            previous = previous->next;
        if (!info->key || my_strcmp(key, info->key))
            continue;
        my_free(info->key);
        my_free(info->value);
        previous->next = info->next;
        my_free(info);
        return 0;
    }
    return 84;
}

static int copy_el(info_t *info1, info_t *info2)
{
    if (!info1)
        return 84;
    if (!info2)
        return 0;
    info1->key = info2->key;
    info1->value = info2->value;
    info1->key_hashed = info2->key_hashed;
    info1->next = info2->next;
    my_free(info2);
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
        return delete_el(ht->table[id].next, key, hashed_key, ht->table + id);
    ht->table[id].value = my_free(ht->table[id].value);
    ht->table[id].key = my_free(ht->table[id].key);
    ht->table[id].key_hashed = 0;
    return copy_el(ht->table + id, ht->table[id].next);
}
