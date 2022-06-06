/*
** EPITECH PROJECT, 2022
** My_lib from tek1 - made by Lysandra
** File description:
** my_revstr
*/

#include "my.h"

char *my_revstr(char *str)
{
    char i;
    int new = my_strlen(str) - 1;

    for (int old = 0; old < new; old++) {
        i = str[old];
        str[old] = str[new];
        str[new] = i;
        new--;
    }
    return (str);
}
