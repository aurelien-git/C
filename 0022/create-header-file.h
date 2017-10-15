/*
C - Deeper in C Course
License    : GNU GPL v3 or later
Author     : Aurélien DESBRIERES
Mail       : aurelien@hackers.camp
Project    : Deeper in C
Created on : Saturday October 15 2017

Write with Emacs-Nox ──────────────────────────┐
C - Create Header File ────────────────────────┘

That is the header file
*/

#ifndef _MYHEADER__H__  // to skip if define two times in the .c sources in #include
#define _MYHEADER__H__

#define addnum(x, y) x + y
int addnumbers(int a, int b);

#endif
