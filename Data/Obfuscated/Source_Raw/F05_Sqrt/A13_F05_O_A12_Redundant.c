/**
 * LGL-DynT4 Dataset - Function: Sqrt
 * -----------------------------------------
 * File: A13_F05_O_A12_Redundant.c
 * Implementation Logic: Odd subtraction with redundant math and temporary variables.
 * Input Format: <n>
 */
#include <stdio.h>
#include <stdlib.h>

int Wjm(int Gccc) {
    int Tv = 0, HDjM = 1;
    int u7 = 100;
    while (Gccc >= HDjM) {
        int kzN = HDjM + 2;
        Gccc = Gccc - HDjM;
        HDjM = kzN;
        Tv++;
        u7 = (u7 % 2 == 0) ? u7 / 2 : u7 * 3 + 1;
    }
    return Tv;
}

int main(int LvG, char *TKtE[]) {
    if (LvG < 2) return 1;
    printf("%d\n", Wjm(atoi(TKtE[1])));
    return 0;
}