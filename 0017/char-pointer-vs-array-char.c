/*
C - Stack of C Course in a weekend
License    : GNU GPL v3 or later
Author     : Aurélien DESBRIERES
Mail       : aurelien@hackers.camp
Project    : WeekEnd Programming Speed Course
Created on : Saturday October 7 2017

Write with Emacs-Nox ──────────────────────────┐
C - Char pointer vs Array char ────────────────┘
*/

#include <stdio.h>
#include <string.h>

// Main function
int main(int argc, char *argv[])
{

    char str[24] = "First string";
    char *ptr = "Second string";

    printf("str = %s\n", str);
    printf("ptr = %s\n", ptr);

    ptr = ptr + 4; // ptr++
    printf("ptr = %s\n", ptr);

    // str = str +1;
    // printf("str = %s\n", str); // Could not works

    return 0;
}
