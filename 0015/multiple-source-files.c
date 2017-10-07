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

// Function from the other file
// Function numbers
int addnumbers(int a, int b);

// Main function
int main(int argc, char *argv[])
{
    int total;
    total = addnumbers( 2 , 4);

    printf("total = %d\n", total);
    return 0;
}
