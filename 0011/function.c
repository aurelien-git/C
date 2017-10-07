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
int add_numbo ( int d, int c );

int main(int argc, char *argv[])
{
    int result;
    int bob;
    result = add_numbers( 4, 3 );
    bob = add_numbo( 6, 7 );
    printf("sum is %d\n", result);
    printf("sum is %d\n", bob);

    return 0;
}


int add_numbers ( int a, int b)
{
    int sum;
    sum = a + b;

    return sum;
}

int add_numbo ( int d, int c)
{
    int sum;
    sum = c + d;

    return sum;
}
