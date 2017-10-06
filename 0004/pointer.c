/*
C - Stack of Course in a weekend
License    : GNU GPL v3 or later
Author     : Aurélien DESBRIERES
Mail       : aurelien@hackers.camp
Project    : WeekEnd Programming Speed Course
Created on : Friday October 6 2017

Write with Emacs-Nox ──────────────────────────┐
C - Pointer ───────────────────────────────────┘
*/

#include <stdio.h>

int main(int argc, char *argv[])

{
    int n;
    int *k;

    n = 25;
    k = &n;
    *k = 25;

    printf("n = %d\n", n);
    printf("k = %x\n", k);
    printf("*k = %d\n", *k);

    return 0;
}
