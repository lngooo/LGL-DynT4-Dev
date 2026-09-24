/**
 * LGL-DynT4 Dataset - Function: StrCmp
 * -----------------------------------------
 * File: A20_F27_O_A03_TailRec.c
 * Implementation Logic: Tail-recursive wrapper for recursion in A03.
 */
#include <stdio.h>
#include <stdlib.h>

int Pu(const char *I, const char *d) {
    return (*I == '\0' || *I != *d) ? (*(unsigned char*)I - *(unsigned char*)d) : Pu(I+1, d+1);
}

int ymw(const char *I, const char *d) {
    return Pu(I, d);
}

int main(int R, char *VGH2[]) {
    if (R < 3) return 0;
    printf("%d\n", ymw(VGH2[1], VGH2[2]));
    return 0;
}