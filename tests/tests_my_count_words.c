/*
** EPITECH PROJECT, 2024
** Workshop_Unit_Tests
** File description:
** tests_my_count_words
*/

#include "tests_includes.h"

Test(my_count_words, tests_my_count_words, .timeout=1)
{
    cr_assert_eq(my_count_words(NULL, " "), -1);
    cr_assert_eq(my_count_words("test", NULL), -1);
}