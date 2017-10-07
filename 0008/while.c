/*
C - Stack of C Course in a weekend
License    : GNU GPL v3 or later
Author     : Aurélien DESBRIERES
Mail       : aurelien@hackers.camp
Project    : WeekEnd Programming Speed Course
Created on : Saturday October 7 2017

Write with Emacs-Nox ──────────────────────────┐
C - For Loop Statements ───────────────────────┘
*/

#include <stdio.h>

int main(int argc, char *argv[])

{
    int i = 10;

    while ( i < 20 )
	{
	    printf("i = %d\n", i);
	    i++;
	}

    do
	{
	    printf("i = %d\n", i);
	    i++;
	}
    while ( i < 20 );

    do
	{
	    printf("i = %d\n", i);
	    i++;
	}
    while ( i < 20 );

    return 0;
}
