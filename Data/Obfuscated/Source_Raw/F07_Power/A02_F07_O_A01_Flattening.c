/**
 * LGL-DynT4 Dataset - Function: Power
 * -----------------------------------------
 * File: A02_F07_O_A01_Flattening.c
 * Implementation Logic: Control flow flattening using switch-case derived from A01.
 * Input Format: <base> <exp>
 */
#include <stdio.h>
#include <stdlib.h>

int S5Z(int g, int exp) {
    int QQ = 1, kPN = 0, K = 0;
    while (K != -1) {
        switch (K) {
            case 0: K = (kPN < exp) ? 1 : 2; break;
            case 1: QQ *= g; kPN++; K = 0; break;
            case 2: K = -1; break;
        }
    }
    return QQ;
}

int main(int Wv9Y, char *gagq[]) {
    if (Wv9Y < 3) return 1;
    printf("%d\n", S5Z(atoi(gagq[1]), atoi(gagq[2])));
    return 0;
}