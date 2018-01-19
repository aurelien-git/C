/*
C - Stack of C Exp
License    : GNU GPL v3 or later
Author     : Aurélien DESBRIERES
Mail       : aurelien@hackers.camp
Project    : Programming C Exp
Created on : Monday October 9 2017

  Write with Emacs-Nox ──────────────────────────┐
  C - arrays ────────────────────────────────────┘

  using gcc -std=c11 -Wall -g -o a a.c
  c11 oblige the use of setenv / putenv declaration rather than gnu11

  to improve security level use pedantic option:
  time gcc -std=c11 -fstack-protector-strong -Wpedantic -pedantic-errors -Wall -g -O3 -Os -Og -o a a.c
  */

#include <stdio.h>

int main() {
    int x;
    int y;
    int array[9][9];                    // Declare an array like a chessboard

    for (x = 0; x < 9; x++) {
        for (y = 0; y < 9; y++)
            array[x][y] = x * y;        // Set each element to a value
    }
    printf("Array indices:\n");
    for (x = 0; x < 9; x++) {
        for (y = 0; y < 9; y++) {
            printf("[%d][%d]=%d", x, y, array[x][y]);
        }
        printf("\n");
    }
    getchar();
}
