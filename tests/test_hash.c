/*
** EPITECH PROJECT, 2024
** test_hash.c
** File description:
** test_hash.c
*/

#include <stdio.h>
#include <stdint.h>
#include <stdlib.h>
#include <string.h>

int hash(char *key, int len);

int main(int argc, char **argv)
{
    if (argc != 3)
        return 84;
    FILE *file = fopen("word_list", "r");

    uint32_t hash_size = atoi(argv[1]);
    size_t n_words = 0;
    size_t limit = atoi(argv[2]);

    if (file == NULL) {
        perror("Error opening file");
        return 1;
    }

    int hash_table[hash_size];
    memset(hash_table, 0, hash_size);
    int collision_count = 0;

    char word[1001] = {0};

    while (n_words < limit && fscanf(file, "%s", word) != EOF) {
        int hash_value = hash(word, hash_size);

        // Check for collisions
        printf("%d -> ", hash_value);
        hash_value = hash_value % hash_size;
        printf("%d\n", hash_value);
        if (hash_table[hash_value] == 1) {
            collision_count++;
        } else {
            hash_table[hash_value] = 1;
        }
        n_words++;
    }

    fclose(file);

    printf("Number of collisions: %d, with %d words\n", collision_count, n_words);

    return 0;
}
