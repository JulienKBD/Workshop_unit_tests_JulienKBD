/*
** EPITECH PROJECT, 2024
** Workshop_Unit_Tests
** File description:
** tests_my_array_len
*/
#include "tests_includes.h"

Test(my_array_len, tests_my_array_len, .timeout=1)
{
    char **array = malloc(sizeof(char *) * 3);

    array[0] = "bonjour";
    array[1] = "les amis";
    array[2] = NULL;
    cr_assert_eq(my_array_len(NULL), -1);
    cr_assert_eq(my_array_len(array), 2);
    free(array);
}