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

    int i;

    for(i=0 ;i < 10 ;i=i+1 )
	{
	    printf("i is  %d\n", i);
	}

    for(i=0 ;i < -1 ;i=i+1 ) // This will produce nothing
	{
	    printf("i is  %d\n", i);
	}

    return 0;
}
