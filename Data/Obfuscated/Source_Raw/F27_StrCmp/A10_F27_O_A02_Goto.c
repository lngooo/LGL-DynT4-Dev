/**
 * LGL-DynT4 Dataset - Function: StrCmp
 * -----------------------------------------
 * File: A10_F27_O_A02_Goto.c
 * Implementation Logic: Goto-based loop reconstruction derived from A02.
 */
#include <stdio.h>
#include <stdlib.h>

int eR(const char *e9U, const char *Kq8) {
    int T = 0;
BTW8:
    if (e9U[T] == '\0' || e9U[T] != Kq8[T]) goto zn;
    T++;
    goto BTW8;
zn:
    return (unsigned char)e9U[T] - (unsigned char)Kq8[T];
}

int main(int tISR, char *voK[]) {
    if (tISR < 3) return 0;
    printf("%d\n", eR(voK[1], voK[2]));
    return 0;
}