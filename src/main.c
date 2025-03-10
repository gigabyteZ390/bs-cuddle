/*
** EPITECH PROJECT, 2025
** 105demography
** File description:
** Population data parsing and analysis
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <errno.h>
#include <ctype.h>
#include "my_macro.h"
#include "my_functions.h"
#include "dataframe.h"

int main(int argc, char **argv)
{
    df_read_csv("data.csv", NULL);
    return SUCCESS;
}
