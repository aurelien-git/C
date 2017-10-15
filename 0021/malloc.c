/*
C - Deeper in C Course
License    : GNU GPL v3 or later
Author     : Aurélien DESBRIERES
Mail       : aurelien@hackers.camp
Project    : Deeper in C
Created on : Saturday October 15 2017

Write with Emacs-Nox ──────────────────────────┐
C - Malloc ────────────────────────────────────┘
Compiler option:
time gcc -std=c11 -fstack-protector-strong -Wstrict-prototypes -Wall -o file file.c
     or  -std=gnu11
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// Malloc - allocate and free dynamic memory
// man malloc

// Main function
int main(int argc, char *argv[])
{
    char *ptr;

    ptr = malloc(24); // allocate 24 bytes of memory

    if(ptr == NULL){
	printf("Failed to get or allocate memory!\n");
	exit(1);
    }

    strcpy(ptr, "Hello there!");

    printf("%s\n", ptr);

    free (ptr);

    return 0;
}
