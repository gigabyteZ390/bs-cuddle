/*
** EPITECH PROJECT, 2025
** cuddle
** File description:
** parsing csv file
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <errno.h>
#include <ctype.h>
#include "my.h"
#include "my_macro.h"

static FILE* opening_csv_file(void)
{
    FILE *file = fopen("./105demography_data.csv", "r");

    if (file == NULL) {
        fprintf(stderr, "No such file as 105demography.csv\n");
        return NULL;
    }
    return file;
}

static char *read_line(FILE *file)
{
    char *line;

    line = malloc(sizeof(char) * MAX_LINE_LENGTH);
    if (!line)
        return NULL;
    if (fgets(line, MAX_LINE_LENGTH, file) == NULL) {
        free(line);
        return NULL;
    }
    line[strcspn(line, "\n")] = 0;
    return line;
}

int handling_csv_files(int argc, char **argv)
{
    FILE *file = opening_csv_file();

    if (file == NULL) {
        return ERROR;
    }
    for (int i = 1; i < argc; i++) {
    }
    fclose(file);
    return SUCCESS;
}
