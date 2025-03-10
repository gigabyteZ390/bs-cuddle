/*
** EPITECH PROJECT, 2024
** my_strncpy
** File description:
** function that copies n characters from a string into another
*/

#include "my_lib_functions.h"

char *my_strncpy(char *dest, char const *src, int n)
{
    int strlen = my_strlen(src);
    int i = 0;

    while (i < n && i < strlen) {
        dest[i] = src[i];
        i++;
    }
    if (n >= strlen) {
        dest[i] = '\0';
        }
    return dest;
}
