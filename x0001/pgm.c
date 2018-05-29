/*
C - Segmentation fault (core dumped) & valgrind
License    : GNU GPL v3 or later
Author     : Aurélien DESBRIERES
Mail       : aurelien@hackers.camp
Project    : Programming C Exp
Created on : Wednesday May 29 2018

Write with Emacs-Nox ──────────────────────────┐
C - Seg fault & analysis ──────────────────────┘

Compilation flag level
This type of flag would not pass with that type of situation because
it will see the trouble
using gcc -std=c11 -Wall -g -o a a.c
c11 oblige the use of setenv / putenv declaration rather than gnu11

You must keep it simple as
gcc -o pgm pgm.c


to improve security level use pedantic option:
time gcc -std=c11 -fstack-protector-strong -Wpedantic -pedantic-errors -Wall -g -O3 -Os -Og -o a a.c
      or -std=gnu11

And Valgrind for analysis
valgrind --leak-check=full --error-exitcode=1 -v ./pgm
*/

#include <stdio.h>

main()

{

    char *p = 1;

    *p = 'a';

    printf("value in pointer p is %c\n", *p);

}
