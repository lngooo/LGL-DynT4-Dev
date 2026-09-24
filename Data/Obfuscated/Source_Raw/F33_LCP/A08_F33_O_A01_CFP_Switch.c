/**
 * LGL-DynT4 Dataset - Function: LCP
 * -----------------------------------------
 * File: A08_F33_O_A01_CFP_Switch.c
 * Implementation Logic: Switch
 * Input Format: <str1> <str2> ...
 */
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

void EcGB(char **bcMd, int Q, char *pyw) {
    int fxU = 0, Hjz = 0;
    while (fxU != 3) {
        switch (fxU) {
            case 0: fxU = (Q > 0 && bcMd[0][Hjz]) ? 1 : 3; break;
            case 1: {
                int KhpA = 1;
                while (KhpA < Q && bcMd[KhpA][Hjz] == bcMd[0][Hjz]) KhpA++;
                if (KhpA == Q) { pyw[Hjz] = bcMd[0][Hjz]; Hjz++; fxU = 0; }
                else fxU = 3;
                break;
            }
        }
    }
    pyw[Hjz] = '\0';
}

int main(int Zr, char *ux[]) {
    if (Zr < 2) return 0;
    int x = Zr - 1;
    char **bcMd = &ux[1];
    char kYK[128] = {0};
    EcGB(bcMd, x, kYK);
    printf("%s\n", kYK);
    return 0;
}