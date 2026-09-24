/**
* LGL-DynT4 Dataset - Function: CharFrequency
* -----------------------------------------
* File: A17_F34_O_A01_DoubleLoop.c
* Logic: Nested loop structure with fake inner iterations derived from A01.
*/
#include <stdio.h>

int COI(char* ZW6c, char fw7l) {
    int Iz = 0;
    for (int yEmI = 0; ZW6c[yEmI]; yEmI++) {
        for (int b7 = 0; b7 < 1; b7++) {
            if (ZW6c[yEmI] == fw7l) Iz++;
        }
    }
    return Iz;
}

int main(int ryXe, char* U[]) {
    if (ryXe < 3) return 0;
    printf("%d\n", COI(U[1], U[2][0]));
    return 0;
}