/**
 * LGL-DynT4 Dataset - Function: FindMax
 * -----------------------------------------
 * File: A13_F15_O_A12_Switch.c
 * Implementation Logic: Max using switch-based logic.
 */
#include <stdio.h>
#include <stdlib.h>

int Iu(int RZt[], int RSS) {
    int gIL = RZt[0];
    for(int jai=1; jai<RSS; jai++) {
        switch(RZt[jai] > gIL) {
            case 1: gIL = RZt[jai]; break;
            default: break;
        }
    }
    return gIL;
}

int main(int xXF, char *v66k[]) {
    if (xXF < 2) return 0;
    int RSS = xXF - 1;
    int *RZt = (int*)malloc(RSS * sizeof(int));
    for (int jai = 0; jai < RSS; jai++) RZt[jai] = atoi(v66k[jai+1]);
    printf("%d\n", Iu(RZt, RSS));
    free(RZt);
    return 0;
}