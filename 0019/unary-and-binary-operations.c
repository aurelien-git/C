/*
C - Deeper in C Course
License    : GNU GPL v3 or later
Author     : Aurélien DESBRIERES
Mail       : aurelien@hackers.camp
Project    : Deeper in C
Created on : Saturday October 7 2017

Write with Emacs-Nox ──────────────────────────┐
C - Unary and Binary operations ───────────────┘
Compiler option:
time gcc -fstack-protector-strong -Wstrict-prototypes -Wall -W -E -c preprocessor.c
*/

#include <stdio.h>

// Main function
int main(int argc, char *argv[])
{
    int a;

    // Test I
    a = 4;
    a++;                                                    // a = a +1
    printf("a = %d\n", a);

    // Test II
    a = 2;
    a += 4;                                                 // a = a + 4
    printf("a = %d\n", a);

    // Test III
    a = 9;
    a--;
    printf("a = %d\n", a);

    // Test IV
    a = 4;
    a *= 3;
    printf("a = %d\n", a);

    // Test V
    a = 20;
    a /= 4;
    printf("a = %d\n", a);

    // Test VI
    a = 6;
    //a++;              // get the value then increment
    printf("Unary a = %d\n", a++);

    a = 6;
    //++a;              // increment then get the value
    printf("a = %d\n", ++a);


    return 0;
}
