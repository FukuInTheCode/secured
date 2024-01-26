/*
** EPITECH PROJECT, 2024
** delete_hashtable.c
** File description:
** delete_hashtable.c
*/

#include "my.h"

static int delete_list(info_t *el)
{
    info_t *previous = NULL;

    for (info_t *tmp = el->next; tmp; tmp = tmp->next) {
        free(tmp->key);
        free(tmp->value);
        free(previous);
        if (tmp != el)
            previous = tmp;
    }
    free(previous);
    return 0;
}

void delete_hashtable(hashtable_t *ht)
{
    if (!ht)
        return;
    if (!ht->table)
        return;
    for (int i = 0; i < ht->len; i++)
        delete_list(ht->table + i);
}
