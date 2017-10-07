/*
C - Stack of C Course in a weekend
License    : GNU GPL v3 or later
Author     : Aurélien DESBRIERES
Mail       : aurelien@hackers.camp
Project    : WeekEnd Programming Speed Course
Created on : Saturday October 7 2017

Write with Emacs-Nox ──────────────────────────┐
C - If Than Else Statements ───────────────────┘
*/

#include <stdio.h>

int main(int argc, char *argv[])

{
    int n = 10;

    if(n >= 5)
	{
	    printf("n is greater or equal than 5\n");
	}
    else
	{
	    printf("Conditional statement 1 is false\n");
	}


    if(n <= 5)
	{
	    printf("n is less than or equal 5\n");
	}
    else
	{
	    printf("Conditional statement 2 is false\n");
	}

    return 0;
}
