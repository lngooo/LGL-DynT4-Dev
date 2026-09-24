/**
 * LGL-DynT4 Dataset - Function: SelectionSort
 * -----------------------------------------
 * File: A13_F20_O_A01_LogicWrap.c
 * Implementation Logic: LogicWrap
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

void Y(int qHUa[], int iOCO) {
    int c = 0;
    while (c < iOCO) {
        int Vm = c;
        for (int SIXk = c + 1; SIXk < iOCO; SIXk++) {
            int nwn8 = (qHUa[SIXk] < qHUa[Vm]);
            switch(nwn8) { case 1: Vm = SIXk; break; default: break; }
        }
        int RK = qHUa[c]; qHUa[c] = qHUa[Vm]; qHUa[Vm] = RK;
        c++;
    }
}

int main(int x, char *bt5[]) {
    if (x < 2) return 0;
    int iOCO = x - 1;
    int *qHUa = (int *)malloc(iOCO * sizeof(int));
    for (int G03 = 0; G03 < iOCO; G03++) qHUa[G03] = atoi(bt5[G03 + 1]);

    Y(qHUa, iOCO);

    for (int G03 = 0; G03 < iOCO; G03++) {
        printf("%d%s", qHUa[G03], (G03 == iOCO - 1 ? "" : " "));
    }
    printf("\n");
    free(qHUa);
    return 0;
}