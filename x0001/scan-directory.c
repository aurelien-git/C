/*
C - Stack of C Exp
License    : GNU GPL v3 or later
Author     : Aurélien DESBRIERES
Mail       : aurelien@hackers.camp
Project    : Programming C Exp
Created on : Wednesday January 10 2018

Write with Emacs-Nox ──────────────────────────┐
C - scan directories ──────────────────────────┘

using gcc -std=c11 -Wall -g -o a a.c
c11 oblige the use of setenv / putenv declaration rather than gnu11

to improve security level use pedantic option:
time gcc -std=c11 -fstack-protector-strong -Wpedantic -pedantic-errors -Wall -g -O3 -Os -Og -o a a.c
      or -std=gnu11
*/

#include <unistd.h>
#include <stdio.h>
#include <dirent.h>
#include <string.h>
#include <sys/stat.h>
#include <stdlib.h>

void printdir(char *dir, int depth) {
    DIR *dp;
    struct dirent *entry;
    struct stat statbuf;
    if((dp = opendir(dir)) == NULL) {
        fprintf(stderr,"cannot open directory: %s\n", dir);
        return;
    }
    chdir(dir);
    while((entry = readdir(dp)) != NULL) {
        lstat(entry->d_name,&statbuf);                      // lstat is not compliant with C11
        if(S_ISDIR(statbuf.st_mode)) {
            // Found a directory, but ignore . and ..
            if(strcmp(".",entry->d_name) == 0 ||
               strcmp("..",entry->d_name) == 0)
                continue;
            printf("%*s%s/\n",depth,"",entry->d_name);
            // Recurse at a new indent level
            printdir(entry->d_name,depth+4);
        }
        else printf("%*s%s\n", depth,"",entry->d_name);
    }
    chdir("..");
    closedir(dp);
}

int main() {
    printf("Directory scan of /home:\n");
    printf("/home/aurelien/\n");
    printf("done.\n");
    //    exit(0);
}
