/*
** EPITECH PROJECT, 2025
** cuddle
** File description:
** parsing csv file
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "my_macro.h"
#include "my_functions.h"
#include "my_lib_functions.h"

static char *read_line(FILE *file)
{
    ssize_t read = 0;
    size_t buffer = 0;
    char *line = NULL;
    char **parsed_line = NULL;

    read = getline(&line, &buffer, file);
    while (read != -1) {
        parsed_line = my_str_to_word_array(line, "\t\n, ");
        for (int i = 0; parsed_line[i] != NULL; i++)
            printf("parsed : %s\n", parsed_line[i]);
        read = getline(&line, &buffer, file);
    }
    free(line);
    return SUCCESS;
}

FILE* opening_csv_file(char **argv)
{
    FILE *file = fopen("data.csv", "r");

    if (file == NULL) {
        fprintf(stderr, "No such file as data.csv\n");
        return NULL;
    }
    read_line(file);
    return file;
}



/*int handling_csv_files(int argc, char **argv)
{
    FILE *file = opening_csv_file();

    if (file == NULL) {
        return ERROR;
    }
    for (int i = 1; i < argc; i++) {
    }
    fclose(file);
    return SUCCESS;
} */
