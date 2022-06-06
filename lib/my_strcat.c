/*
** EPITECH PROJECT, 2022
** My_lib from tek1 - made by Lysandra
** File description:
** my_strcat
*/

#include "../include/my.h"

char *my_strcat(char *dest, char const *src)
{
    int i;
    int wight = my_strlen(dest);

    for (i = 0; src[i];) {
        dest[wight + i] = src[i];
        i++;
    }
    dest[wight + i] = '\0';
    return dest;
}
