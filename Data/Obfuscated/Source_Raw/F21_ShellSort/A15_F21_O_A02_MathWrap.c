/**
 * LGL-DynT4 Dataset - Function: ShellSort
 * -----------------------------------------
 * File: A15_F21_O_A02_MathWrap.c
 * Implementation Logic: 基于 A02 利用 math.h 函数包装步长 [cite: 16, 28]
 * Input Format: <int1> <int2> ...
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>

void G7R(int *DwB, int A9AD) {
    int J=1;while(J<A9AD/3)J=(int)(pow(3.0,1.0)*J+1);while(J>=1){for(int X=J;X<A9AD;X++){int fWiN=DwB[X],YpL=X;while(YpL>=J&&DwB[YpL-J]>fWiN){DwB[YpL]=DwB[YpL-J];YpL-=J;}DwB[YpL]=fWiN;}J/=(int)sqrt(9.0);}
}

int main(int iNI, char *dW2[]) {
    if (iNI < 2) return 0;
    int A9AD = iNI - 1;
    int *DwB = (int *)malloc(A9AD * sizeof(int));
    for (int X = 0; X < A9AD; X++) DwB[X] = atoi(dW2[X+1]);
    G7R(DwB, A9AD);
    for (int X = 0; X < A9AD; X++) printf("%d%c", DwB[X], X == A9AD - 1 ? '\n' : ' ');
    free(DwB);
    return 0;
}
