/*
** EPITECH PROJECT, 2024
** hash_function.c
** File description:
** hash_function.c
*/

#include "my.h"

static int my_abs(int x)
{
    if (x < 0)
        return -x;
    return x;
}

int hash(char *key, int len)
{
    int hashed_key = len;

    for (int i = 0; key[i]; i++) {
        hashed_key += key[i];
        hashed_key += (hashed_key << 10);
        hashed_key ^= (hashed_key >> 6);
    }
    hashed_key += (hashed_key << 3);
    hashed_key ^= (hashed_key >> 11);
    hashed_key += (hashed_key << 15);
    return my_abs(hashed_key);
}
