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
      or -sdt=gnu11
*/

#include <fts.h>                                            // Traverse a file hierarchy
#include <string.h>                                         // String operation
#include <unistd.h>

int main(int argc, char **argv){
    char *dot[] = {".", 0};
    char **paths = argc > 1 ? argv + 1 : dot;

    FTS *tree = fts_open(paths, FTS_NOCHDIR, 0);
    if (!tree) {
        perror("fts_open");
        return 1;
    }

    FTSENT *node;
    while ((node = fts_read(tree))) {
        if (node->fts_level > 0 && node->fts_name[0] == '.')
            fts_set(tree, node, FTS_SKIP);
        else if (node->fts_info & FTS_F) {
            printf("got file named %s at depth %d, "
                "accessible via %s from the current directory "
                "or via %s from the original starting directory\n",
                node->fts_name, node->fts_level,
                node->fts_accpath, node->fts_path);
                // if fts_open is not given FTS_NOCHDIR,
                // fts may change the program's current working directory
        }
    }
    if (errno) {
        perror("fts_read");
        return 1;
    }

    if (fts_close(tree)) {
        perror("fts_close");
        return 1;
    }

    return 0;
}
