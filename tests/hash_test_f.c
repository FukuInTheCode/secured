/*
** EPITECH PROJECT, 2024
** hash_test_f.c
** File description:
** hash_test_f.c
*/

int hash(char *key, int len)
{
    int hash = 0;

    for (int i = 0; i < strlen(key); i++) {
        hash = (hash * 31) + key[i];  // Using a prime number (31) for mixing
    }

    return hash + len;
}
