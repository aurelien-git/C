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
#include "another.h"

// Main function
int main(int argc, char *argv[])
{
    printf("sum = %d\n", addnum(3, 4));
    printf("sum2 = %d\n", addnumbers(6, 5));
    return 0;
}
