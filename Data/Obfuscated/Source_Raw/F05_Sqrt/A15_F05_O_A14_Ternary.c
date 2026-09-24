/**
 * LGL-DynT4 Dataset - Function: Sqrt
 * -----------------------------------------
 * File: A15_F05_O_A14_Ternary.c
 * Implementation Logic: Recursive logic compressed using ternary operators.
 * Input Format: <n>
 */
#include <stdio.h>
#include <stdlib.h>

int K(long C, long AjA, long AG) {
    long VUdT = AjA + (AG - AjA) / 2;
    return (AjA > AG) ? (int)AG : (VUdT * VUdT <= C ? K(C, VUdT + 1, AG) : K(C, AjA, VUdT - 1));
}

int Hn(int C) {
    return (C < 0) ? -1 : K(C, 0, C);
}

int main(int QEH, char *u9lD[]) {
    if (QEH < 2) return 1;
    printf("%d\n", Hn(atoi(u9lD[1])));
    return 0;
}