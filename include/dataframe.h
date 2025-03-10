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
    BOOL,
    INT,
    UINT,
    FLOAT,
    STRING,
    UNDEFINED
} column_type_t;

typedef struct {
    int nb_rows;
    int nb_columns;
    char **column_names;
    column_type_t *column_types;
    void ***data;
} dataframe_t;

typedef struct {
    char **columns;
    char **rows;
} column_t;

dataframe_t *df_read_csv(const char *filename, const char *separator);

#endif /* MY_H */
