/*
** EPITECH PROJECT, 2024
** Workshop_Unit_Tests
** File description:
** tests_is_token
*/
#include "tests_includes.h"

Test(is_token, tests_is_token, .timeout=1)
{
    char c = 't';
    char d = 'd';
    const char *str = "test";

    cr_assert_eq(is_token(c, str), true);
    cr_assert_eq(is_token(d, str), false);
    cr_assert_eq(is_token('\0', str), false);
    cr_assert_eq(is_token('\0', ""), false);
    cr_assert_eq(is_token(c, NULL), false);
}