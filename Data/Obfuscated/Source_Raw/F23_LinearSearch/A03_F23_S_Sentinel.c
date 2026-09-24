/**
 * LGL-DynT4 Dataset - Function: LinearSearch
 * -----------------------------------------
 * File: A03_F23_S_Sentinel.c
 * Implementation Logic: Sentinel
 * Input Format: <target> <val1> <val2> ...
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int Ly(int Rm[], int EjF, int UF) {
    if (EjF <= 0) return -1;
    int imO = Rm[EjF-1];
    Rm[EjF-1] = UF;
    int H = 0;
    while (Rm[H] != UF) H++;
    Rm[EjF-1] = imO;
    return (H < EjF - 1 || imO == UF) ? H : -1;
}

int main(int aB, char *F[]) {
    if (aB < 3) return 1;
    int UF = atoi(F[1]);
    int Tl = aB - 2;
    int Rm[100];
    for (int H = 0; H < Tl; H++) {
        Rm[H] = atoi(F[H + 2]);
    }
    int A = Ly(Rm, Tl, UF);
    printf("%d\n", A);
    return 0;
}