/*
** EPITECH PROJECT, 2022
** My_lib from tek1 - made by Lysandra
** File description:
** my_putchar
*/

#include "my.h"

void my_putchar(char c)
{
    write(1, &c, 1);
}
