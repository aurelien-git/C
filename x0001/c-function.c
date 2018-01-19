/*
C - Stack of C Exp
License    : GNU GPL v3 or later
Author     : Aurélien DESBRIERES
Mail       : aurelien@hackers.camp
Project    : Programming C Exp
Created on : Thursday January 11 2018

Write with Emacs-Nox ──────────────────────────┐
C - function ──────────────────────────────────┘

using gcc -std=c11 -Wall -g -o a a.c
c11 oblige the use of setenv / putenv declaration rather than gnu11

to improve security level use pedantic option:
time gcc -std=c11 -fstack-protector-strong -Wpedantic -pedantic-errors -Wall -g -O3 -Os -Og -o a a.c
      or -std=gnu11
*/

#include <stdio.h>

// function declaration
int max(int num1, int num2);
int main() {
    // local variable definition
    int a = 100;
    int b = 200;
    int ret;

    // calling a function to get max value
    ret = max(a, b);
    printf("Max value is: %d\n", ret);
    return 0;
}

// Function returning the max between two numbers
int max(int num1, int num2) {
    // local variable declaration
    int result;

    if (num1 > num2)
        result = num1;
    else
        result = num2;
    return result;
}
