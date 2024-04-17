/*
** EPITECH PROJECT, 2024
** Workshop_Unit_Tests
** File description:
** tests_freen_array
*/
#include "tests_includes.h"

Test(freen_array, tests_freen_array)
{
    char **array = malloc(sizeof(char *) * 3);

    array[0] = malloc(sizeof(char));
    array[1] = malloc(sizeof(char));
    array[2] = NULL;
    freen_array(array, 2);
    freen_array(array, -2);
    freen_array(NULL, 2);
    freen_array(NULL, -2);
}