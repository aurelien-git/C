/*
C - Stack of C Course in a weekend
License    : GNU GPL v3 or later
Author     : Aurélien DESBRIERES
Mail       : aurelien@hackers.camp
Project    : WeekEnd Programming Speed Course
Created on : Saturday October 7 2017

Write with Emacs-Nox ──────────────────────────┐
C - Functions ─────────────────────────────────┘
*/

#include <stdio.h>

int add_numbers ( int a, int b );

int main(int argc, char *argv[])
{
    int result;
    int (*myfunc_ptr)(int, int);

    myfunc_ptr = &add_numbers;

    result = myfunc_ptr(3,7);
    printf("result = %d\n", result);

    return 0;
}


int add_numbers ( int a, int b)
{
    int sum;
    sum = a + b;

    return sum;
}
