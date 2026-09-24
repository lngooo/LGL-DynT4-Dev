/**
 * LGL-DynT4 Dataset - Function: Fibonacci
 * -----------------------------------------
 * File: A07_F04_O_A01_ControlFlowFlattening.c
 * Implementation Logic: ControlFlowFlattening
 * Input Format: <arg1>
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

long F(int liyI) {
    int GJ = 0;
    long ez3 = 0, B = 1, D;
    int u = 2;
    while (GJ != 3) {
        switch (GJ) {
            case 0: if (liyI == 0) return 0; GJ = 1; break;
            case 1: GJ = (u <= liyI) ? 2 : 3; break;
            case 2: D = ez3 + B; ez3 = B; B = D; u++; GJ = 1; break;
        }
    }
    return (liyI == 1) ? 1 : B;
}

int main(int KzTO, char *shzb[]) {
    if (KzTO < 2) {
        return 1;
    }
    int liyI = atoi(shzb[1]);
    if (liyI < 0) {
        printf("0\n");
        return 0;
    }
    long kZ8 = F(liyI);
    printf("%ld\n", kZ8);
    return 0;
}
