/*
** EPITECH PROJECT, 2023
** units tests
** File description:
** my_printf
*/

#include <criterion/criterion.h>
#include <criterion/redirect.h>
#include <stdio.h>
#include "../include/my_printf.h"

void redirect_all_std(void)
{
    cr_redirect_stderr();
    cr_redirect_stdout();
}

Test(my_printf, simple_string, .init=redirect_all_std)
{
    char str[100];

    sprintf(str, "Hello World");
    my_printf("Hello World");
    cr_assert_stdout_eq_str(str);
}

Test(my_printf, one_char, .init = redirect_all_std)
{
    char str[100];

    sprintf(str, "Hello World %c", 'a');
    my_printf("Hello World %c", 'a');
    cr_assert_stdout_eq_str(str);
}

Test(my_printf, integer_d, .init = redirect_all_std)
{
    char str[100];

    sprintf(str, "Hello World %d", 42);
    my_printf("Hello World %d", 42);
    cr_assert_stdout_eq_str(str);
}

Test(my_printf, integer_i, .init = redirect_all_std)
{
    char str[100];

    sprintf(str, "Hello World %i", 42);
    my_printf("Hello World %i", 42);
    cr_assert_stdout_eq_str(str);
}


Test(my_printf, f_lower, .init = redirect_all_std)
{
    char str[100];

    sprintf(str, "Hello World %f", 3.145902);
    my_printf("Hello World %f", 3.145902);
    cr_assert_stdout_eq_str(str);
}

Test(my_printf, F_upper, .init = redirect_all_std)
{
    char str[100];

    sprintf(str, "Hello World %F", 3.145902);
    my_printf("Hello World %F", 3.145902);
    cr_assert_stdout_eq_str(str);
}

Test(my_printf, pointer, .init = redirect_all_std)
{
    int *ptr = 0;
    char str[100];

    sprintf(str, "Hello World %p", &ptr);
    my_printf("Hello World %p", &ptr);
    cr_assert_stdout_eq_str(str);
}

Test(my_printf, x_lower, .init = redirect_all_std)
{
    char str[100];

    sprintf(str, "Hello World %x", 255);
    my_printf("Hello World %x", 255);
    cr_assert_stdout_eq_str(str);
}

Test(my_printf, X_upper, .init = redirect_all_std)
{
    char str[100];

    sprintf(str, "Hello World %X", 255);
    my_printf("Hello World %X", 255);
    cr_assert_stdout_eq_str(str);
}

Test(my_printf, modulo_modulo, .init = redirect_all_std)
{
    char str[100];

    sprintf(str, "Hello World %%");
    my_printf("Hello World %%");
    cr_assert_stdout_eq_str(str);
}

Test(my_printf, octal, .init = redirect_all_std)
{
    char str[100];

    sprintf(str, "Hello World %o", 64);
    my_printf("Hello World %o", 64);
    cr_assert_stdout_eq_str(str);
}

Test(my_printf, string_s, .init = redirect_all_std)
{
    char str[100];

    sprintf(str, "Hello World %s", "Hello");
    my_printf("Hello World %s", "Hello");
    cr_assert_stdout_eq_str(str);
}


Test(my_printf, e_lower_case, .init = redirect_all_std)
{
    char str[100];

    sprintf(str, "Hello World %e", 0.000021);
    my_printf("Hello World %e", 0.000021);
    cr_assert_stdout_eq_str(str);
}

Test(my_printf, e_upper_case, .init = redirect_all_std)
{
    char str[100];

    sprintf(str, "Hello World %E", 0.000021);
    my_printf("Hello World %E", 0.000021);
    cr_assert_stdout_eq_str(str);
}

Test(my_printf, unsigned_float, .init = redirect_all_std)
{
    char str[100];

    sprintf(str, "Hello World %u", 12345);
    my_printf("Hello World %u", 12345);
    cr_assert_stdout_eq_str(str);
}

Test(my_printf, g_lower_case, .init = redirect_all_std)
{
    char str[100];

    sprintf(str, "Hello World %g", 123.123);
    my_printf("Hello World %g", 123.123);
    cr_assert_stdout_eq_str(str);
}

Test(my_printf, G_upper_case, .init = redirect_all_std)
{
    char str[100];

    sprintf(str, "Hello World %G", 123.123);
    my_printf("Hello World %G", 123.123);
    cr_assert_stdout_eq_str(str);
}

Test(my_printf, n_flag, .init = redirect_all_std)
{
    char str[100];
    int charCounter;
    int myCharCounter;

    sprintf(str, "Hello World %d %n", 1514, &charCounter);
    my_printf("Hello World %d %n", 1514, &myCharCounter);
    cr_assert_eq(charCounter, myCharCounter);
}

Test(my_printf, a_flag, .init = redirect_all_std)
{
    char str[100];
    double nb = 12.25;

    sprintf(str, "Hello World %a", nb);
    my_printf("Hello World %a", nb);
    cr_assert_stdout_eq_str(str);
}

Test(my_printf, A_flag, .init = redirect_all_std)
{
    char str[100];
    double nb = 12.25;

    sprintf(str, "Hello World %A", nb);
    my_printf("Hello World %A", nb);
    cr_assert_stdout_eq_str(str);
}
