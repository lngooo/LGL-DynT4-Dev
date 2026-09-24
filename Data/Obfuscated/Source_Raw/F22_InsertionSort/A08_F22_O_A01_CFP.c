/**
 * LGL-DynT4 Dataset - Function: InsertionSort
 * -----------------------------------------
 * File: A08_F22_O_A01_CFP.c
 * Implementation Logic: CFP
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

void rfn6(int Ho[], int VJn) {
    int x = 0, cp = 1, PWD8, b;
    while (x != 3) {
        switch (x) {
            case 0: x = (cp < VJn) ? 1 : 3; break;
            case 1: b = Ho[cp]; PWD8 = cp - 1; x = 2; break;
            case 2:
                while (PWD8 >= 0 && Ho[PWD8] > b) { Ho[PWD8+1] = Ho[PWD8]; PWD8--; }
                Ho[PWD8+1] = b; cp++; x = 0; break;
        }
    }
}

int main(int crrL, char *t09f[]) {
    if (crrL < 2) return 0;
    int VJn = crrL - 1;
    int *Ho = (int *)malloc(VJn * sizeof(int));
    for (int cp = 0; cp < VJn; cp++) Ho[cp] = atoi(t09f[cp + 1]);

    rfn6(Ho, VJn);

    for (int cp = 0; cp < VJn; cp++) {
        printf("%d%s", Ho[cp], (cp == VJn - 1 ? "" : " "));
    }
    printf("\n");
    free(Ho);
    return 0;
}