/**
 * LGL-DynT4 Dataset - Function: IsPrime
 * -----------------------------------------
 * File: A19_F06_O_A01_SwitchLoop.c
 * Implementation Logic: Loop re-structured into a single switch-case within a while.
 */
#include <stdio.h>
#include <stdlib.h>

int rAtE(int x) {
    if (x < 2) return 0;
    int pUO = 2;
    while (1) {
        if (pUO > x / pUO) return 1;
        switch (x % pUO) {
            case 0:
                return 0;
            default:
                pUO++;
                break;
        }
    }
}

int main(int MNmD, char *a8z[]) {
    if (MNmD < 2) return 1;
    printf("%d\n", rAtE(atoi(a8z[1])));
    return 0;
}