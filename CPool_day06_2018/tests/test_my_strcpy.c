/*
** EPITECH PROJECT, 2018
** test_my_strcpy.c
** File description:
** test_my_strcpy.c
*/
#include <criterion/criterion.h>

char	*my_strcpy(char *drejtimi, char const *burimi);

Test(my_strcpy, copy_string_in_empty_array)
{
    char drejtimi [6] = {0};
    my_strcpy(drejtimi, "Hello");
    cr_assert_str_eq(drejtimi, "Hello");
}

Test(my_strcpy, copy_string_in_empty_array_return_value)
{
    char drejtimi[6] = {0};
    char *copy = my_strcpy(drejtimi, "Hello");
    cr_assert_str_eq(copy, "Hello");
}
