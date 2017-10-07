/*
C - Stack of C Course in a weekend
License    : GNU GPL v3 or later
Author     : Aurélien DESBRIERES
Mail       : aurelien@hackers.camp
Project    : WeekEnd Programming Speed Course
Created on : Saturday October 7 2017

Write with Emacs-Nox ──────────────────────────┐
C - Typedef Statement ─────────────────────────┘
*/

#include <stdio.h>

typedef int INT32;
typedef char MYCHR;
typedef struct mystruct_t {
    int a;
    int b;
} MYSTRX;

int main(int argc, char *argv[])

{
    INT32 i;
    MYCHR mystr[20] = "Hello World!";
    MYSTRX gold;
    MYSTRX silver;
    MYSTRX bronze;

    gold.a = 2;
    gold.b = 4;

    printf("i = %d\n", i);
    printf("mystr = %s\n", mystr);
    printf("gold.a = %d\n", gold.a);
    printf("gold.b = %d\n", gold.b);

    return 0;
}
