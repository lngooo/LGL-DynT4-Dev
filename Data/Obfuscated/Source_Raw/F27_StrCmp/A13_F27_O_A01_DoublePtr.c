/**
 * LGL-DynT4 Dataset - Function: StrCmp
 * -----------------------------------------
 * File: A13_F27_O_A01_DoublePtr.c
 * Implementation Logic: Indirect pointer access using double pointers to obfuscate A01.
 */
#include <stdio.h>
#include <stdlib.h>

int t(const char *lTB, const char *Ffl) {
    const char **zmo = &lTB;
    const char **POf = &Ffl;
    while (**zmo && (**zmo == **POf)) {
        (*zmo)++; (*POf)++;
    }
    return (unsigned char)**zmo - (unsigned char)**POf;
}

int main(int CWg, char *b4M[]) {
    if (CWg < 3) return 0;
    printf("%d\n", t(b4M[1], b4M[2]));
    return 0;
}