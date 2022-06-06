/*
** EPITECH PROJECT, 2022
** My_lib from tek1 - made by Lysandra
** File description:
** my_strdup
*/

#include "../include/my.h"

char *my_strdup(char const *src)
{
    char *dest = NULL;
    int i = 0;

    dest = malloc(sizeof(char) * (my_strlen(src) + 1));
    for (; src[i]; i++) {
        dest[i] = src[i];
    }
    dest[i] = '\0';
    return dest;
}
