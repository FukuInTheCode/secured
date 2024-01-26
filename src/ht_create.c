/*
** EPITECH PROJECT, 2024
** ht_create.c
** File description:
** ht_create.c
*/

#include "my.h"

static int my_free(void *ptr)
{
    free(ptr);
    return 0;
}

hashtable_t *new_hashtable(int (*hash)(char *, int), int len)
{
    hashtable_t *ht = NULL;

    if (len > 0 || !hash)
        ht = malloc(sizeof(hashtable_t));
    if (!ht)
        return NULL;
    ht->table = malloc(sizeof(info_t) * len);
    if (!ht->table)
        return NULL + my_free((void *)ht);
    for (int i = 0; i < len; i++) {
        ht->table[i].value = NULL;
        ht->table[i].key_hashed = 0;
        ht->table[i].key = NULL;
        ht->table[i].next = NULL;
    }
    ht->hash = hash;
    ht->len = len;
    return ht;
}
