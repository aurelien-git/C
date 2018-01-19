/*
C - Stack of C Exp
License    : GNU GPL v3 or later
Author     : Aurélien DESBRIERES
Mail       : aurelien@hackers.camp
Project    : Programming C Exp
Created on : Monday October 9 2017

  Write with Emacs-Nox ──────────────────────────┐
  C - pointer to address ────────────────────────┘

  using gcc -std=c11 -Wall -g -o a a.c
  c11 oblige the use of setenv / putenv declaration rather than gnu11

  to improve security level use pedantic option:
  time gcc -std=c11 -fstack-protector-strong -Wpedantic -pedantic-errors -Wall -g -O3 -Os -Og -o a a.c
  */

#include <stdio.h>

int main() {
    int x;                              // A normal integer
    int *p;                             // A pointer to an integer ("*p" is an integer, so p
                                        // must be a pointer to an integer
    p = &x;                             // Read it, "assign the adress of x to p"
    scanf("%d", &x);                    // Put a value in x, we could also use p here
    printf("%d\n", *p);                 // Note the use of the * to get the value
    getchar();
}
