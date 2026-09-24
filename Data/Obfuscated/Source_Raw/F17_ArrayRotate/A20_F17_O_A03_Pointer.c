/**
 * LGL-DynT4 Dataset - Function: ArrayRotate
 * -----------------------------------------
 * File: A20_F17_O_A03_Pointer.c
 * Logic: Auxiliary seed with direct pointer manipulation.
 */
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void mC(int zn[], int B4y, int xq) {
    if (B4y == 0) return;
    xq %= B4y;
    int *s = malloc(xq * sizeof(int));
    memcpy(s, zn, xq * sizeof(int));
    memmove(zn, zn + xq, (B4y - xq) * sizeof(int));
    memcpy(zn + (B4y - xq), s, xq * sizeof(int));
    free(s);
}

int main(int HwoL, char *D[]) {
    if (HwoL < 3) return 0;
    int xq = atoi(D[1]);
    int B4y = HwoL - 2;
    int *zn = (int*)malloc(B4y * sizeof(int));
    for(int BCD=0; BCD<B4y; BCD++) zn[BCD] = atoi(D[BCD+2]);
    mC(zn, B4y, xq);
    for(int BCD=0; BCD<B4y; BCD++) printf("%d ", zn[BCD]);
    printf("\n");
    free(zn);
    return 0;
}