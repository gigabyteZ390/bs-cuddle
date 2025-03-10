/*
** EPITECH PROJECT, 2024
** my_strncat
** File description:
** my_strncat
*/

#include "my_lib_functions.h"

char *my_strncat(char *dest, char const *src, int nb)
{
    int i = 0;
    int j = 0;

    for (; dest[j] != '\0'; j++);
    for (; i < nb; i++) {
        dest[j] = src[i];
        j++;
    }
    dest[j] = '\0';
    return dest;
}
