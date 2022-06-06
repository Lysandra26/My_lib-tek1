/*
** EPITECH PROJECT, 2022
** My_lib from tek1 - made by Lysandra
** File description:
** my_swap
*/

#include "my.h"

void my_swap(int *a, int *b)
{
    int *tmp = a;

    a = b;
    b = tmp;
}
