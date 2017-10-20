/*
C - Stack of C Exp
License    : GNU GPL v3 or later
Author     : Aurélien DESBRIERES
Mail       : aurelien@hackers.camp
Project    : Programming C Exp
Created on : Monday October 9 2017

Write with Emacs-Nox ──────────────────────────┐
C - a ─────────────────────────────────────────┘

using gcc -std=c11 -Wall -g -o a a.c
c11 oblige the use of setenv / putenv declaration rather than gnu11

to improve security level use pedantic option:
time gcc -std=c11 -fstack-protector-strong -Wpedantic -pedantic-errors -Wall -g -o a a.c
*/

#include <stdio.h>

int main() {
    printf("Hello World!\n");
    return 0;
}
