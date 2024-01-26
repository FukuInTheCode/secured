/*
** EPITECH PROJECT, 2024
** hash_function.c
** File description:
** hash_function.c
*/

#include "my.h"

int hash(char *key, int len)
{
    int sum_key = 0;
    int hash_key;

    for (int i = 0; key[i] != '\0'; ++i) {
        sum_key += (int)key[i];
    }
    hash_key = len * (sum_key + 6414) - 5987;
    return hash_key;
}
