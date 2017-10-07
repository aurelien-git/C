/*
C - Stack of C Course in a weekend
License    : GNU GPL v3 or later
Author     : Aurélien DESBRIERES
Mail       : aurelien@hackers.camp
Project    : WeekEnd Programming Speed Course
Created on : Saturday October 7 2017

Write with Emacs-Nox ──────────────────────────┐
C - Structures ────────────────────────────────┘
*/

#include <stdio.h>

int main(int argc, char *argv[])

{
    struct {
	int a;
	float b;
	int c;
    } myst;

    myst.a = 4;
    myst.b = 3.37;
    myst.c = 8;

    printf("a = %d, b = %f, c = %d\n", myst.a, myst.b, myst.c);

    return 0;
}
