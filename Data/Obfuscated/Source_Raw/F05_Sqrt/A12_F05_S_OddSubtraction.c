/**
 * LGL-DynT4 Dataset - Function: Sqrt
 * -----------------------------------------
 * File: A12_F05_S_OddSubtraction.c
 * Implementation Logic: Subtracting consecutive odd numbers (Seed 6).
 * Input Format: <n>
 */
#include <stdio.h>
#include <stdlib.h>

int xJ(int eyG) {
    if (eyG < 0) return -1;
    int WJr0 = 0, i = 1;
    while (eyG >= i) {
        eyG -= i;
        i += 2;
        WJr0++;
    }
    return WJr0;
}

int main(int z, char *YvJ[]) {
    if (z < 2) return 1;
    printf("%d\n", xJ(atoi(YvJ[1])));
    return 0;
}