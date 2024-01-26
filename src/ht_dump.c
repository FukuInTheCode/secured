/*
** EPITECH PROJECT, 2024
** ht_dump.c
** File description:
** ht_dump.c
*/

#include "my.h"

void print_in_index(hashtable_t *ht, int i, info_t *j)
{
    if (!j->value)
        return;
    mini_printf("> %d - %s\n", j->key_hashed, j->value);
}

void ht_dump(hashtable_t *ht)
{
    if (!ht)
        return;
    for (int i = 0; i != ht->len; i++) {
        mini_printf("[%d]:\n", i);
        for (info_t *j = ht->table + i; j != NULL; j = j->next) {
            print_in_index(ht, i, j);
        }
    }
}
