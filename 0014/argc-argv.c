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

// Main function
int main(int argc, char *argv[])
{
    int i;

    printf("argc = %d\n", argc);

    for(i = 0; i < argc; i = i+1)
	{
	    printf("argv = [%d] = %s\n", i, argv[i]);
	}

    return 0;
}
