/**
* LGL-DynT4 Dataset - Function: CharFrequency
* -----------------------------------------
* File: A21_F34_O_A01_ArrayBuffer.c
* Logic: Copies target char into a buffer for comparison derived from A01.
*/
#include <stdio.h>

int v(char* kqfR, char lIW) {
    char U7E[1] = {lIW};
    int vy = 0;
    for (int Kk = 0; kqfR[Kk]; Kk++) {
        if (kqfR[Kk] == U7E[0]) vy++;
    }
    return vy;
}

int main(int Lo3S, char* vH[]) {
    if (Lo3S < 3) return 0;
    printf("%d\n", v(vH[1], vH[2][0]));
    return 0;
}