/*
** EPITECH PROJECT, 2024
** ht_insert.c
** File description:
** ht_insert.c
*/

#include "hashtable.h"
#include "my.h"

static int change_el(info_t *info, char *value)
{
    free(info->value);
    info->value = my_strdup(value);
    return 84 * !info->value;
}

static int insert_el(info_t *head, char *key, char *value, int hashed_key)
{
    info_t *tmp = NULL;

    for (info_t *info = head; info; info = info->next)
        if (!my_strcmp(info->key, key))
            return change_el(info, value);
    tmp = malloc(sizeof(info_t));
    if (!tmp)
        return 84;
    tmp->next = head->next;
    tmp->key = head->key;
    tmp->value = head->value;
    tmp->key_hashed = head->key_hashed;
    head->key = my_strdup(key);
    head->value = my_strdup(value);
    head->key_hashed = hashed_key;
    head->next = tmp;
    return 0;
}

int ht_insert(hashtable_t *ht, char *key, char *value)
{
    int hashed_key = 0;
    int id = 0;

    if (!ht || !key || !value || !ht->table)
        return 84;
    hashed_key = ht->hash(key, ht->len);
    id = hashed_key % ht->len;
    id *= ((id >= 0) - (id < 0));
    if (ht->table[id].key)
        return insert_el(ht->table + id, key, value, hashed_key);
    ht->table[id].key = my_strdup(key);
    ht->table[id].value = my_strdup(value);
    ht->table[id].key_hashed = hashed_key;
    return 0;
}
