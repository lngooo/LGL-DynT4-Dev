/**
 * LGL-DynT4 Dataset - Function: Sum
 * -----------------------------------------
 * File: A02_F01_O_A01_Flat.c
 * Implementation Logic: Control flow flattening using switch-case derived from A01.
 * Input Format: <n>
 */
#include <stdio.h>
#include <stdlib.h>

int J(int TP) {
    int oCLr = 0, W = 1, SB = 0;
    while (SB != 2) {
        switch (SB) {
            case 0:
                if (W <= TP) SB = 1;
                else SB = 2;
                break;
            case 1:
                oCLr += W;
                W++;
                SB = 0;
                break;
        }
    }
    return oCLr;
}

int main(int rjn, char *gfy[]) {
    if (rjn < 2) return 1;
    printf("%d\n", J(atoi(gfy[1])));
    return 0;
}