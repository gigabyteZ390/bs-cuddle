/*
** EPITECH PROJECT, 2025
** cuddle
** File description:
** parsing csv file
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <fcntl.h>
#include "my_macro.h"
#include "my_functions.h"
#include "my_lib_functions.h"
#include "dataframe.h"
#include <unistd.h>

/*static char *read_line(FILE *file)
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
} */

void read_csv(FILE *fd, dataframe_t *data)
{
    ssize_t read = 0;
    size_t buffer = 0;
    char *line = NULL;
    char *parsed_line = NULL;
    char **column_name = NULL;

    read = getline(&line, &buffer, fd);
    column_name = my_str_to_word_array(line, ",");
    data->column_names = column_name;
    while (read != -1) {
        parsed_line = strtok(line, ",");
        printf("parsed_line  : %s\n", parsed_line);
        read = getline(&line, &buffer, fd);
    }
    free(line);
}

dataframe_t *df_read_csv(const char *filename, const char *separator)
{
    dataframe_t *data = malloc(sizeof(dataframe_t));

    FILE *fd = fopen(filename, "r");

    if (filename == NULL)
        return NULL;
    read_csv(fd, data);
    return data;
}
