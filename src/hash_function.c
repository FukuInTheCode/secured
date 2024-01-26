/*
** EPITECH PROJECT, 2024
** hash_function.c
** File description:
** hash_function.c
*/

#include "my.h"

int hash(char *key, int len)
{
    int hashed_key = len;
    int tenth = 1000;

    if (!key || len < 1)
        return 84;
    for (int i = 0; key[i]; i++) {
        hashed_key += key[i] * tenth;
        tenth *= -10;
    }
    return (hashed_key ^ -1) + (hashed_key & 1);
}
