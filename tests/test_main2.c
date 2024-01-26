/*
** EPITECH PROJECT, 2024
** test_main2.c
** File description:
** test_main2.c
*/

#include "my.h"

int main(void)
{
    printf("%d, %d\n", hash("\0", 34), hash("", 34));
    return 0;
}
