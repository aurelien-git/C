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

#include <stdio.h>                                          // man stdio I/O library functions

int total = 0;
int sum (int, int);

// Main function
int main(int argc, char *argv[])
{
    printf("Fucking Hell!\n");                              // Because it must be said!

    // How to print different type of characters, strings, and values
    char ch = 'A';
    char str[42] = "One day no one will make me piss anymore!";  // Just the perfect primer char sentence
    float flt = 10.234;
    int no = 150;
    double dbl = 20.123456;

    printf("Character is %c \n", ch);
    printf("\n\t\t\t%s \n\n", str);
    printf("Float value is %f \n", flt);
    printf("Integer value is %d \n", no);
    printf("Double value is %lf \n", dbl);
    printf("Octal value is %o\n", no);
    printf("Hexadecimal value is %x \n", no);

    total = sum (1, 1);                                     // Calculus made from defined function I
    printf("Total is: %d\n", total);

    char ICE_CUBE;                                          // Scanf to read characters from keyboard
    printf("Enter any character \n");
    scanf("%c", &ICE_CUBE);                                 // &ch for consecutive characters &str for string
    printf("So: %c \nIs what you mean \n", ICE_CUBE);

    char HAIL_STONE[42];                                    // Scanf > 42
    printf("Enter any string ( upto 42 characters ) \n");
    scanf("%s", HAIL_STONE);                                // &str for string
    printf("So: %s \nIs what you mean \n", HAIL_STONE);

    printf("Hit Enter to exit\n");
    getchar();                                              // Stand from keyboard

    return 0;
}


// Defined function I
int sum (int a, int b)
{
    return a + b;
}
