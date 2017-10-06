/*
C - Stack of Course in a weekend
License    : GNU GPL v3 or later
Author     : Aurélien DESBRIERES
Mail       : aurelien@hackers.camp
Project    : WeekEnd Programming Speed Course
Created on : Friday October 6 2017

Write with Emacs-Nox ──────────────────────────┐
C - Fload ─────────────────────────────────────┘
*/

#include <stdio.h>

int main(int argc, char *argv[])

{
    int k;
    int zznum;
    int sumnum;
    int myint;
    char mychar;
    float mynum;
    long int mylongint;
    double mydouble, mysumdb;

    printf("Hello World\n");

    k = 24;
    zznum = 4;
    sumnum = k + zznum;
    mychar = 'c';
    mynum = 24.3;
    myint = 5432;
    mydouble = 243.25;
    mysumdb = 3.5 + mydouble;

    printf("Value àf k = %d\n", k);
    printf("Value of zznum = %d\n", zznum);
    printf("Value of to vars are: %d and %d\n", k, zznum);
    printf("Total is %d\n", sumnum);
    printf("mychar is %c\n", mychar);
    printf("mynum = %f\n", mynum);

    printf("size of int = %d\n", sizeof(int));
    printf("size of int = %d\n", sizeof(myint));

    printf("size of int = %d\n", sizeof(char));
    printf("size of int = %d\n", sizeof(mychar));

    printf("size of int = %d\n", sizeof(float));
    printf("size of int = %d\n", sizeof(mynum));

    printf("size of long int = %d\n", sizeof(long int));
    printf("size of long int = %d\n", sizeof(long int));


    printf("size of long double = %d\n", sizeof(double));
    printf("size of long double = %d\n", sizeof(mydouble));

    printf("mysumdb = %f\n", mysumdb);

    myint = 3;
    mysumdb = 3.2 + myint;
    printf("mysumdb = %f\n", mysumdb);

    mysumdb = 22.4 + 4.0;
    printf("mysumdb = %f\n", mysumdb);

    return 0;
}
