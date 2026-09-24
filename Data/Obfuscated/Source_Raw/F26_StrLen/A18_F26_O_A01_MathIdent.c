/**
 * LGL-DynT4 Dataset - Function: StrLen
 * -----------------------------------------
 * File: A18_F26_O_A01_MathIdent.c
 * Implementation Logic: Using identity i = (i + 5) - 5.
 */
#include <stdio.h>

int X(const char *UUr) {
    int OGv = 0;
    while (UUr[OGv]) {
        OGv = (OGv + 1);
    }
    return (OGv * 2) / 2;
}

int main(int Q1qw, char *a[]) {
    if (Q1qw < 2) return 0;
    printf("%d\n", X(a[1]));
    return 0;
}