/*
C - Stack of C Exp
License    : GNU GPL v3 or later
Author     : Aurélien DESBRIERES
Mail       : aurelien@hackers.camp
Project    : Programming C Exp
Created on : Monday October 9 2017

  Write with Emacs-Nox ──────────────────────────┐
  C - structures ────────────────────────────────┘

  using gcc -std=c11 -Wall -g -o a a.c
  c11 oblige the use of setenv / putenv declaration rather than gnu11

  to improve security level use pedantic option:
  time gcc -std=c11 -fstack-protector-strong -Wpedantic -pedantic-errors -Wall -g -O3 -Os -Og -o a a.c
  */

#include <stdio.h>

struct xampl {
    int x;
};

int main() {
    struct xampl structure;
    struct xampl *ptr;

    structure.x = 12;
    ptr = &structure;                   // Need the & when dealing with structure and using pointer to them
    printf("%d\n", ptr->x);             // The -> acts somewhate like the * when it is used with pointers
    getchar();
}
