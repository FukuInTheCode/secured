/*
** EPITECH PROJECT, 2024
** hash_function.c
** File description:
** hash_function.c
*/

#include "my.h"

int hash(char *key, int len)
{
    int hash_key = 112;
    long long int o = 1;
    int j = 1;

    if (!key || len < 1)
        return 0;
    for (int i = 0; key[i] != '\0'; i++) {
        hash_key += key[i] * key[i] * o * o * i * i;
        o *= key[i] * j * hash_key;
        o += len * my_strlen(key) * key[i];
        j *= -1;
    }
    return hash_key;
}
