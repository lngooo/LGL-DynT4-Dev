/**
 * LGL-DynT4 Dataset - Function: Sum
 * -----------------------------------------
 * File: A19_F01_O_A18_Array.c
 * Implementation Logic: Storing sequence in an array before summing (Data Structure clone).
 * Input Format: <n>
 */
#include <stdio.h>
#include <stdlib.h>

int Du7(int a) {
    if (a <= 0) return 0;
    int *NKge = (int*)malloc(sizeof(int) * a);
    for (int Gq = 0; Gq < a; Gq++) NKge[Gq] = Gq + 1;
    int w4 = 0;
    for (int Gq = 0; Gq < a; Gq++) w4 += NKge[Gq];
    free(NKge);
    return w4;
}

int main(int p, char *skC[]) {
    if (p < 2) return 1;
    printf("%d\n", Du7(atoi(skC[1])));
    return 0;
}