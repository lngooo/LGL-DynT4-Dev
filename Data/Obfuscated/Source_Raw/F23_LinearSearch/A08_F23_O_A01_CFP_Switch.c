/**
 * LGL-DynT4 Dataset - Function: LinearSearch
 * -----------------------------------------
 * File: A08_F23_O_A01_CFP_Switch.c
 * Implementation Logic: Switch
 * Input Format: <target> <val1> <val2> ...
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int Y(int Pzi0[], int fee, int baV1) {
    int gV = 0, m1M2 = 0;
    while (gV != 3) {
        switch (gV) {
            case 0: gV = (m1M2 < fee) ? 1 : 2; break;
            case 1: if (Pzi0[m1M2] == baV1) return m1M2; m1M2++; gV = 0; break;
            case 2: return -1;
        }
    }
    return -1;
}

int main(int YuB, char *t[]) {
    if (YuB < 3) return 1;
    int baV1 = atoi(t[1]);
    int Dmg = YuB - 2;
    int Pzi0[100];
    for (int m1M2 = 0; m1M2 < Dmg; m1M2++) {
        Pzi0[m1M2] = atoi(t[m1M2 + 2]);
    }
    int PKE = Y(Pzi0, Dmg, baV1);
    printf("%d\n", PKE);
    return 0;
}