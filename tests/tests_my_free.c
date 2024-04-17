/*
** EPITECH PROJECT, 2024
** Workshop_Unit_Tests
** File description:
** tests_my_free
*/
#include "tests_includes.h"

Test(my_free, tests_my_free, .timeout=1)
{
    char *str = malloc(sizeof(char) * 1);

    my_free(str);
    my_free(NULL);
}

