/*
** EPITECH PROJECT, 2025
** my.h
** File description:
** header for libcuddle.a
*/
#include <stdarg.h>
#include "my_macro.h"
#ifndef MY_H
    #define MY_H

typedef enum {
BOOL ,
INT ,
UINT ,
FLOAT ,
STRING ,
UNDEFINED
} column_type_t ;

int handling_csv_files(int argc, char **argv);

#endif