/*
  C - Stack of C Exp
  License    : GNU GPL v3 or later
  Author     : Aurélien DESBRIERES
  Mail       : aurelien@hackers.camp
  Project    : Programming C Exp
  Created on : Monday October 9 2017

  Write with Emacs-Nox ──────────────────────────┐
  C - a ─────────────────────────────────────────┘

  using gcc -std=c11 -Wall -g -o a a.c
  c11 oblige the use of setenv / putenv declaration rather than gnu11

  to improve security level use pedantic option:
  time gcc -std=c11 -fstack-protector-strong -Wpedantic -pedantic-errors -Wall -g -O3 -Os -Og -o a a.c
*/

// separate part of code from a.c for testing this part of code



#include <string.h>

// String function -strrev
char *strrev(char *str) {
    char *p1, *p2;
    if (! str || ! *str)
        return str;
    for (p1 = str, p2 = str + strlen(str) - 1; p2 > p1; ++p1, --p2)
        {
            *p1 ^= *p2;
            *p2 ^= *p1;
            *p1 ^= *p2;
        }
    return str;
}
