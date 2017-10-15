/*
C - Deeper in C Course
License    : GNU GPL v3 or later
Author     : Aurélien DESBRIERES
Mail       : aurelien@hackers.camp
Project    : Deeper in C
Created on : Saturday October 15 2017

Write with Emacs-Nox ──────────────────────────┐
C - Create Header File ────────────────────────┘
Compiler option:
time gcc -std=c11 -fstack-protector-strong -Wstrict-prototypes -Wall -o file file.c
     or  -std=gnu11
*/

#include <stdio.h>
#include "create-header-file.h"          // use "" for local .h file

// Main function
int addnumbers(int a, int b)
{
    int sum;

    sum = a + b;

    return sum;
}
