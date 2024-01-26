/*
** EPITECH PROJECT, 2023
** MY_H
** File description:
** Placeholder
*/

#ifndef MY_H
    #define MY_H
    #define _GNU_SOURCE
    #include <stdio.h>
    #include <unistd.h>
    #include <stdint.h>
    #include <time.h>
    #include <limits.h>
    #include <stdarg.h>
    #include <errno.h>
    #include <math.h>
    #include <stdlib.h>
    #include <string.h>

    #include <criterion/criterion.h>
    #include <criterion/redirect.h>

    #include <SFML/Graphics.h>
    #include <SFML/Audio.h>
    #include <SFML/Config.h>
    #include <SFML/GPUPreference.h>
    #include <SFML/Network.h>
    #include <SFML/OpenGL.h>
    #include <SFML/System.h>
    #include <SFML/Window.h>
    #include "hashtable.h"

int my_strlen(char const *str);
int my_pf_put_nbr(int nb, int *count);
void my_pf_putchar(char c, int *count);
int my_pf_putstr(char const *str, int *count);
int mini_printf(const char *format, ...);

#endif
