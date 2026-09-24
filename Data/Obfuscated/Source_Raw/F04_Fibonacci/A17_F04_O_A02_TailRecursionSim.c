/**
 * LGL-DynT4 Dataset - Function: Fibonacci
 * -----------------------------------------
 * File: A17_F04_O_A02_TailRecursionSim.c
 * Implementation Logic: TailRecursionSim
 * Input Format: <arg1>
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

long pKA(int QQ) {
    long H = 0, e9H = 1, y;
    cOyx:
    if (QQ == 0) return H;
    if (QQ == 1) return e9H;
    y = H + e9H; H = e9H; e9H = y; QQ--;
    goto cOyx;
}

int main(int Vbw, char *w[]) {
    if (Vbw < 2) {
        return 1;
    }
    int QQ = atoi(w[1]);
    if (QQ < 0) {
        printf("0\n");
        return 0;
    }
    long UQ = pKA(QQ);
    printf("%ld\n", UQ);
    return 0;
}
