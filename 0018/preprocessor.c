/*
C - Stack of C Course in a weekend
License    : GNU GPL v3 or later
Author     : Aurélien DESBRIERES
Mail       : aurelien@hackers.camp
Project    : WeekEnd Programming Speed Course
Created on : Saturday October 7 2017

Write with Emacs-Nox ──────────────────────────┐
C - Preprocessor ──────────────────────────────┘
Compiler option:
time gcc -fstack-protector-strong -Wstrict-prototypes -Wall -W -E -c preprocessor.c
*/

#include <stdio.h>

#define NUM1 5
#define NUM2 8
#define ADD
#define SUM(x,y) x+y

// Main function
int main(int argc, char *argv[])
{
    int i;
    int k;

    int sum;

    i = NUM1;
    k = NUM2;

    sum = SUM(NUM1,NUM2);

    // A comment

    int i;
    int k;
    int sum;

#ifdef ADD

    sum = i + k;

#else

    sum = 1 + k + 10;

#endif


    return 0;
}
