/*
** EPITECH PROJECT, 2022
** my_sokoban
** File description:
** my_put_str
*/

#include "my.h"

int my_put_str(char const *str)
{
    int i = 0;

    while (str[i]) {
        my_putchar(str[i]);
        i++;
    }
    return 0;
}
