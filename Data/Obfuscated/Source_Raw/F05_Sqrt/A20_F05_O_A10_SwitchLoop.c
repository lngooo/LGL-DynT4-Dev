/**
 * LGL-DynT4 Dataset - Function: Sqrt
 * -----------------------------------------
 * File: A20_F05_O_A10_SwitchLoop.c
 * Implementation Logic: Brute force re-structured into a switch-driven state loop.
 * Input Format: <n>
 */
#include <stdio.h>
#include <stdlib.h>

int i2GD(int mZh) {
    if (mZh < 0) return -1;
    long kUD = 0;
    int Tla = 0;
    while (Tla != 1) {
        switch (Tla) {
            case 0: 
                if ((kUD + 1) * (kUD + 1) <= mZh) kUD++;
                else Tla = 1;
                break;
        }
    }
    return (int)kUD;
}

int main(int YsK, char *lN[]) {
    if (YsK < 2) return 1;
    printf("%d\n", i2GD(atoi(lN[1])));
    return 0;
}