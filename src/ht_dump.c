/*
** EPITECH PROJECT, 2024
** ht_dump.c
** File description:
** ht_dump.c
*/

#include "my.h"

void ht_dump(hashtable_t *ht)
{
    for (int i = 0; i != ht->len; i++) {
        mini_printf("[%d]:\n"), i;
        for (info_t *j = ht->table + i; j != NULL; j = j->next) {
            mini_printf("> %d - %s\n", j->key_hashed, j->value);
        }
    }
}
