/*
C - Deeper in C Course
License    : GNU GPL v3 or later
Author     : Aurélien DESBRIERES
Mail       : aurelien@hackers.camp
Project    : Deeper in C
Created on : Saturday October 15 2017

Write with Emacs-Nox ──────────────────────────┐
C - Type Casting ──────────────────────────────┘
Compiler option:
time gcc -std=c11 -fstack-protector-strong -Wstrict-prototypes -Wall -o file file.c
     or  -std=gnu11
*/

#include <stdio.h>

// Main function
int main(int argc, char *argv[])
{
    int i;
    char c;

    char *ptr;
    char s;

    // Test I
    c = 'w';

    i = (int) c;     // Cast c with (int) as integer

    printf("i = %d, %c\n", i, i);

    // Test II
    s = 'x';
    ptr = &s;       // pointr egal the adress of s

    i = (int) ptr;

    printf("i = %x\n", i);

    // Test III
    i = 3000;
    c = (char) i;

    printf("c = %d\n", c);

    return 0;
}
