/**
 * LGL-DynT4 Dataset - Function: SelectionSort
 * -----------------------------------------
 * File: A17_F20_O_A01_WhileTrue.c
 * Implementation Logic: WhileTrue
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

void i8Oy(int z5[], int HkB) {
    int gT = 0;
    while (1) {
        if (gT >= HkB) break;
        int Gh = gT;
        for(int WO6q = gT + 1; WO6q < HkB; WO6q++) if(z5[WO6q] < z5[Gh]) Gh = WO6q;
        int un = z5[gT]; z5[gT] = z5[Gh]; z5[Gh] = un;
        gT++;
    }
}

int main(int f, char *B[]) {
    if (f < 2) return 0;
    int HkB = f - 1;
    int *z5 = (int *)malloc(HkB * sizeof(int));
    for (int gT = 0; gT < HkB; gT++) z5[gT] = atoi(B[gT + 1]);

    i8Oy(z5, HkB);

    for (int gT = 0; gT < HkB; gT++) {
        printf("%d%s", z5[gT], (gT == HkB - 1 ? "" : " "));
    }
    printf("\n");
    free(z5);
    return 0;
}