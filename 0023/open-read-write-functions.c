/*
C - Deeper in C Course
License    : GNU GPL v3 or later
Author     : Aurélien DESBRIERES
Mail       : aurelien@hackers.camp
Project    : Deeper in C
Created on : Saturday October 15 2017

Write with Emacs-Nox ──────────────────────────┐
C - Open Read Write functions ─────────────────┘
Compiler option:
time gcc -std=c11 -fstack-protector-strong -Wstrict-prototypes -Wall -o file file.c
     or  -std=gnu11
*/

#include <stdio.h>
#include <stdlib.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <unistd.h>

// Main function
int main(int argc, char *argv[])
{
    int fd;
    char buf[14];

    // write
    fd = open("myfile.txt", O_CREAT | O_WRONLY, 0600);

    if(fd == -1){
	printf("Failed to create and open the file.\n");
	exit(1);
    }

    write(fd, "Hello World!\n", 13);
    close(fd);

    // read
    fd = open("myfile.txt", O_RDONLY);

    if(fd == -1){
	printf("Failed to open and read the file.\n");
	exit(1);
    }

    read(fd, buf, 13);
    buf[13] = '\0';
    close(fd);

    printf("%s", buf);

    return 0;
}
