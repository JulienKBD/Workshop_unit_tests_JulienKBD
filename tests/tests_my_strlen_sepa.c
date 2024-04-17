/*
** EPITECH PROJECT, 2024
** Workshop_Unit_Tests
** File description:
** tests_my_strlen_sepa
*/
#include "tests_includes.h"

Test(my_strlen_sepa, tests_my_strlen_sepa, .timeout=1)
{
    char const *str = "simple test";
    char const *sep = " ";

    cr_assert_eq(my_strlen_sepa(NULL, sep), -1);
    cr_assert_eq(my_strlen_sepa(str, NULL), -1);
    cr_assert_eq(my_strlen_sepa(str, sep), 6);
}