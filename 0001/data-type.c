/*
C - Stack of Course in a weekend
License    : GNU GPL v3 or later
Author     : Aurélien DESBRIERES
Mail       : aurelien@hackers.camp
Project    : WeekEnd Programming Speed Course
Created on : Friday October 6 2017

Write with Emacs-Nox ──────────────────────────┐
C - Data Type ─────────────────────────────────┘
*/

#include <stdio.h>

int main(int argc, char *argv[])

{
    int k;
    int zznum;
    int sumnum;
    char mychar;

    printf("Hello World\n");

    k = 24;
    zznum = 4;
    sumnum = k + zznum;
    mychar = 'c';

    printf("Value àf k = %d\n", k);
    printf("Value of zznum = %d\n", zznum);
    printf("Value of to vars are: %d and %d\n", k, zznum);
    printf("Total is %d\n", sumnum);
    printf("mychar is %c\n", mychar);

    return 0;
}
