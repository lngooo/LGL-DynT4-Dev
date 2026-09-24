/**
 * LGL-DynT4 Dataset - Function: IsPalindrome
 * -----------------------------------------
 * File: A20_F28_O_A06_DoublePointer.c
 * Implementation Logic: DoublePointer derived from seed.
 * Input Format: <string>
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>

int mTFM(char *Es) {
    char **C = &Es;
    int Ga = 0; while ((*C)[Ga]) Ga++;
    char *l = *C + Ga - 1;
    char *qj = *C;
    while(qj < l) {
        if(*qj != *l) return 0;
        qj++; l--;
    }
    return 1;
}

int main(int Sh, char *m[]) {
    if (Sh < 2) return 1;
    char *Es = m[1];
    int uW = mTFM(Es);
    printf("%d\n", uW);
    return 0;
}