/*
** EPITECH PROJECT, 2022
** My_lib from tek1 - made by Lysandra
** File description:
** my.h
*/

#ifndef MY_H_
    #define MY_H_
    #include <unistd.h>
    #include <stdio.h>
    #include <stdlib.h>

void my_putchar(char c);
int my_put_str(char const *str);
int my_strcmp(char const *s1, char const *s2);
int my_strlen(char const *str);
int my_put_nbr(int nb);
char *my_itoa(int nb);
char *my_strcat(char *dest, char const *src);
char *my_strdup(char const *src);

#endif /* !MY_H_ */
