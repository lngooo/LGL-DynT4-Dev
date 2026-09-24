/**
 * LGL-DynT4 Dataset - Function: StrCmp
 * -----------------------------------------
 * File: A12_F27_O_A05_Arithmetic.c
 * Implementation Logic: A05 with arithmetic pointer manipulation.
 */
#include <stdio.h>
#include <stdlib.h>

int lb(const char *Uhvf, const char *z) {
    while (!(*Uhvf - *z) && *Uhvf != 0) {
        Uhvf = (char*)((size_t)Uhvf + 1);
        z = (char*)((size_t)z + 1);
    }
    return (int)(*(unsigned char*)Uhvf - *(unsigned char*)z);
}

int main(int ZAyS, char *i2vl[]) {
    if (ZAyS < 3) return 0;
    printf("%d\n", lb(i2vl[1], i2vl[2]));
    return 0;
}