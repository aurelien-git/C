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
time gcc -std=c11 -fstack-protector-strong -Wpedantic -pedantic-errors -Wall -g -o a a.c
*/

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main(int argc, char **argv)
{
   char source[] = "fresh2refresh";
   char target[] = "C tutorial";

   printf("Source string = %s", source);
   printf("Target string = %s", target);
   strcat(target, source);
   printf("Target string after strcat( ) = %s", target);

   return 0;
}
