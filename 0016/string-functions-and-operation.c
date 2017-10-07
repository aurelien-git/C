/*
C - Stack of C Course in a weekend
License    : GNU GPL v3 or later
Author     : Aurélien DESBRIERES
Mail       : aurelien@hackers.camp
Project    : WeekEnd Programming Speed Course
Created on : Saturday October 7 2017

Write with Emacs-Nox ──────────────────────────┐
C - Multiples Sources Files in C ──────────────┤
multiple-source-files.c ───────────────────────┤
addnum.c ──────────────────────────────────────┘
*/

#include <stdio.h>
#include <string.h>

// Main function
int main(int argc, char *argv[])
{
    char str[24];
    int i;
    int n;

    // string one
    sprintf(str, "Hello World!");
    printf("%s\n", str);

    // string two
    i = 4;
    sprintf(str, "Value of i = %d", i);
    printf("%s\n", str);

    n = strlen(str);

    printf("lenght of str is %d\n", n);

    return 0;
}
