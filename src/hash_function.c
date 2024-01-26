/*
** EPITECH PROJECT, 2024
** hash_function.c
** File description:
** hash_function.c
*/

#include "my.h"

int hash(char *key, int len)
{
    int hash_key = 0;
    long long int o = 1;
    int j = 1;

    if (!key)
        return 0;
    for (int i = 0; key[i] != '\0'; i++) {
        hash_key += key[i] * o;
        o *= key[i] * j;
        o += len / my_strlen(key) / key[i];
        j *= -1;
    }
    return hash_key;
}
