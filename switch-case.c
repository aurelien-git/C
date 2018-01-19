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

#include <stdio.h>

void playgame() {
    printf("Play game called");
}
void loadgame() {
    printf("Load game called");
}
void playmultiplayer() {
    printf("Play multiplayer game called");
}
int main() {
    int input;

    printf("1. Play game\n");
    printf("2. Load game\n");
    printf("3. Play multiplayer\n");
    printf("4. Exit\n");
    printf("Selection: ");
    scanf("%d", &input);
    switch(input) {
        case 1:                                   // Note the colon, not a semicolon
        playgame();
        break;
        case 2:
        loadgame();
        break;
        case 3:
        playmultiplayer();
        break;
        case 4:
        printf("Thanks for playing!\n");
        break;
        default:
        printf("Bad input, quitting!\n");
        break;
        }
    getchar();
    }
