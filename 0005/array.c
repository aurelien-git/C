/*
C - Stack of C Course in a weekend
License    : GNU GPL v3 or later
Author     : Aurélien DESBRIERES
Mail       : aurelien@hackers.camp
Project    : WeekEnd Programming Speed Course
Created on : Friday October 6 2017

Write with Emacs-Nox ──────────────────────────┐
C - Array ─────────────────────────────────────┘
*/

#include <stdio.h>

int main(int argc, char *argv[])

{
    int a[4];
    int b[4] = { 2,6,3,8 };

    a[0] = 3;
    a[1] = 2;
    a[2] = 7;
    a[3] = 9;

    printf("a values are: %d, %d, %d, %d\n", a[0], a[1], a[2], a[3]);
    printf("b values are: %d, %d, %d, %d\n", b[0], b[1], b[2], b[3]);

    return 0;
}
