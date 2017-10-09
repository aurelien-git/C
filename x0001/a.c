/*
C - Stack of C Exp
License    : GNU GPL v3 or later
Author     : Aurélien DESBRIERES
Mail       : aurelien@hackers.camp
Project    : Programming C Exp
Created on : Monday October 9 2017

Write with Emacs-Nox ──────────────────────────┐
C - a ─────────────────────────────────────────┘
*/

#include <stdio.h>                  // man stdio I/O library functions

int total = 0;
int sum (int, int);

// Main function
int main(int argc, char *argv[])
{
    printf("Fucking Hell!\n");

    total = sum (1, 1);
    printf("Total is: %d\n", total);

    printf("Hit Enter to exit\n");
    getchar();                      // Stand from keyboard

    return 0;
}

int sum (int a, int b)
{
    return a + b;
}
