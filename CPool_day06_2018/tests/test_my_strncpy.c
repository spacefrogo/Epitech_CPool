/*
** EPITECH PROJECT, 2018
** test_my_strncpy.c
** File description:
** test_my_strncpy.c
*/

#include <criterion/criterion.h>

Test(my_strncpy, copy_five_characters_in_empty_array)
{
    char drejtimi[6] = {0};
    my_strncpy(drejtimi, "HelloWorld", 5);
    cr_assert_str_eq(drejtimi, "Hello");
}
