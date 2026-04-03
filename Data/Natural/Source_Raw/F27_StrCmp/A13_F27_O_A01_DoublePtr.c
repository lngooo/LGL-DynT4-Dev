/**
 * LGL-DynT4 Dataset - Function: StrCmp
 * -----------------------------------------
 * File: A13_F27_O_A01_DoublePtr.c
 * Implementation Logic: Indirect pointer access using double pointers to obfuscate A01.
 */
#include <stdio.h>
#include <stdlib.h>

int StrCmp(const char *s1, const char *s2) {
    const char **p1 = &s1;
    const char **p2 = &s2;
    while (**p1 && (**p1 == **p2)) {
        (*p1)++; (*p2)++;
    }
    return (unsigned char)**p1 - (unsigned char)**p2;
}

int main(int argc, char *argv[]) {
    if (argc < 3) return 0;
    printf("%d\n", StrCmp(argv[1], argv[2]));
    return 0;
}