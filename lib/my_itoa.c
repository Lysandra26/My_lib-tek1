/*
** EPITECH PROJECT, 2022
** My_lib from tek1 - made by Lysandra
** File description:
** my_itoa
*/

#include "my.h"

char *my_itoa(int nb)
{
    int len = 0;
    char *str;

    for (int a = nb; a > 9; len++)
        a = a / 10;
    str = malloc(sizeof(char) * (len + 2));
    str[len + 1] = '\0';
    for (int i = len; i >= 0; i--) {
        str[i] = 48 + (nb % 10);
        nb = nb / 10;
    }
    return (str);
}
