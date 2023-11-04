//
// Created by drafael on 11/3/23.
//

#include "../include/my_printf.h"
#include <stdio.h>

int main(void) {
    int count = 54;
    char *word = "Hello World !";

    my_printf("%d \n", 1565);
    printf("%d \n \n", 1565);
    my_printf("%d \n", -1565);
    printf("%d \n \n", -1565);

    my_printf("%i \n", 1565);
    printf("%i \n \n", 1565);
    my_printf("%i \n", -1565);
    printf("%i \n \n", -1565);

    my_printf("WoRLD %s \n", "HELLO");
    printf("WoRLD %s \n \n", "HELLO");
    my_printf("WoRLD %s \n", "H");
    printf("WoRLD %s \n \n", "H");
    my_printf("WoRLD %s \n", "  ");
    printf("WoRLD %s \n \n", "  ");

    my_printf("%c \n", 'j');
    printf("%c \n \n", 'j');
    my_printf("%c \n", '5');
    printf("%c \n \n", '5');

    my_printf("%o \n", 1565);
    printf("%o \n \n", 1565);
    my_printf("%o \n", 10);
    printf("%o \n \n", 10);

    my_printf("%X \n", 1565);
    printf("%X \n \n", 1565);
    my_printf("%X \n", 16);
    printf("%X \n \n", 16);

    my_printf("%x \n", 1565);
    printf("%x \n \n", 1565);
    my_printf("%x \n", 16);
    printf("%x \n \n", 16);

    my_printf("%u \n", 1515151165);
    printf("%u \n \n", 1515151165);
    my_printf("%u \n", -1515151165);
    printf("%u \n \n", -1515151165);

    my_printf("%f \n", 155.551);
    printf("%f \n \n", 155.551);
    my_printf("%f \n", -0.22535);
    printf("%f \n \n", -0.22535);
    my_printf("%f \n", 155.00000551);
    printf("%f \n \n", 155.00000551);

    my_printf("%F \n", 155.551);
    printf("%F \n \n", 155.551);
    my_printf("%F \n", -0.22535);
    printf("%F \n \n", -0.22535);
    my_printf("%F \n", 155.00000541);
    printf("%F \n \n", 155.00000541);

    my_printf("%p \n", &count);
    printf("%p \n \n", &count);
    my_printf("%p \n", &word);
    printf("%p \n \n", &word);

    my_printf("%% \n");
    printf("%% \n \n");
    my_printf("%%a \n");
    printf("%%a \n \n");
    my_printf("%%d \n");
    printf("%%d \n \n");

    my_printf("%e \n", 1565.0);
    printf("%e \n \n", 1565.0);
    my_printf("%e \n", -2145.095052);
    printf("%e \n \n", -2145.095052);
    my_printf("%e \n", 0.0000551);
    printf("%e \n \n", 0.0000551);

    my_printf("%E \n", 1565.0);
    printf("%E \n \n", 1565.0);
    my_printf("%E \n", -2145.095052);
    printf("%E \n \n", -2145.095052);
    my_printf("%E \n", 0.0000551);
    printf("%E \n \n", 0.0000551);

    my_printf("%g \n", 1565.0);
    printf("%g \n \n", 1565.0);
}