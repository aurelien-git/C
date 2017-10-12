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
*/

#include <stdio.h>                                          // man stdio I/O library functions
#include <limits.h>                                         // determines various properties of various variables
#include <stdlib.h>                                         // environment variable - standard library definitions

#define height 100                                          // Constants definition
#define number 3.14
#define letter 'A'
#define letter_sequence "ABC"
#define backslash_char '\?'

int total = 0;
int sum (int, int);

void tester();
//void test();int m = 22, n = 44;                           // Variables
//int a = 50, b = 80;

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

    printf("Character is %c \n", ch);                       // C <stdio> specification area of different type of string, characters and much more
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
    scanf("%c", &ICE_CUBE);                                 // '&'<word> for consecutive characters ' '<word> for string
    printf("So: %c \nIs what you mean \n", ICE_CUBE);

    char HAIL_STONE[42];                                    // Scanf > 42
    printf("Enter any string ( upto 42 characters ) \n");
    scanf("%s", HAIL_STONE);                                // &str for string
    printf("So: %s \nIs what you mean \n", HAIL_STONE);

    enum MONTH { Jan = 0, Feb, Mar };                       // enum example
    enum MONTH month = Mar;
    if(month == 0)
	printf("Value of Jan \n");
    else if(month == 1)
	printf("Month is Feb \n");
    if(month == 2)
	printf("Month is Mar \n");

    int x, y, total;                                        // Tokens example
    x = 10, y = 20;
    total = x + y;
    printf ("Total = %d \n", total);


    printf("Value of height : %d \n", height );             // constant
    printf("Value of number : %f \n", number );
    printf("Value of letter : %c \n", letter );
    printf("Value of letter_sequence : %s \n", letter_sequence );
    printf("Value of backslach_char : %c \n", backslash_char );


    int z;                                                  // C <limit> specifications
    char b;
    float c;
    double d;
    printf("Storage size of int data type: %ld \n", sizeof(z));   // %ld is for long int
    printf("Storage size of char data type: %ld \n", sizeof(b));
    printf("Storage size of float data type: %ld \n", sizeof(c));
    printf("Storage size of double data type: %ld \n", sizeof(d));


    int m = 22, n = 44;                                     // Variables
    /* m, n are local variables of main function
       m and n variables are having scope
       within this main function only.
       These are not visible to test function.

       If you try to access a and b in this function,
       you will get 'a' undeclared and 'b' undeclared error
    */
    printf("\nvalues : m = %d and n = %d\n", m, n);
    tester();                                               // swith to test part of the code

    int setenv();                                           // must be declared from c11 version
    printf("Directory = %s\n", getenv("DIR"));              // stdlib.h standard library definitions
    setenv("FILE", "/usr/bin/a.c", 50);                     // introduce to setenv, getenv
    printf("File = %s\n", getenv("FILE"));

    int putenv();                                           // must be declared from c11 version
    printf("Directory name after modifying = %s\n", getenv("DIR"));
    putenv("DIR=/usr/home/");
    printf("Directory name after modifying = %s\n", getenv("DIR"));

    setenv("FILE", "/usr/bin/a.c", 42);
    printf("File = %s\n", getenv("FILE"));

    int o=40,p=20,add,sub,mul,div,mod;                      // A bit of Arithmetic
    add = o + p;
    sub = o - p;
    mul = o * p;
    div = o / p;
    mod = o % p;
    printf("Addition of o, p, is : %d\n", add);
    printf("Substraction of o, p is: %d\n", sub);
    printf("Multiplication of o, p is : %d\n", mul);
    printf("Division of o, p is : %d\n", div);
    printf("Modulus of o, p is : %d\n", mod);

    printf("Hit Enter to exit\n");
    getchar();                                              // Stand from keyboard

    return 0;
}

void tester()
{
    int a = 50, b = 80;
    /* a, b are local variables of test functions
       a and b variables are having scope
       within this test function only.
       These are not visible to main function.
       If you try to access m and n in this function,
       you will get 'm' undeclared and 'n' undeclared
       error
    */
    printf("\nvalues : a = %d and b = %d\n", a, b);
}


// Defined function I
int sum (int a, int b)
{
    return a + b;
}
