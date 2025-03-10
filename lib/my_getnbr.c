/*
** EPITECH PROJECT, 2024
** my_getnbr
** File description:
** my_getnbr
*/

int my_getnbr(char const *str)
{
    int i = 0;
    int sign = 1;
    int value = 0;

    if (str[i] == '-') {
        sign = -1;
        i++;
    }
    while (str[i] != '\0') {
        value *= 10;
        value += str[i] - '0';
        i++;
    }
    return sign * value;
}
