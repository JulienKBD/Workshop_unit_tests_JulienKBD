/*
** EPITECH PROJECT, 2024
** Workshop_Unit_Tests
** File description:
** tests_my_strlen
*/
#include "tests_includes.h"

Test(my_strlen, tests_my_strlen, .timeout=1)
{
    cr_assert_eq(my_strlen("toto"), 4);
    cr_assert_eq(my_strlen(NULL), -1);
}
