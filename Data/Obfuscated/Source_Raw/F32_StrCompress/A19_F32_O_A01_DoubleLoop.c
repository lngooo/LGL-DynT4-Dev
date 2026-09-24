/**
* LGL-DynT4 Dataset - Function: StrCompress
* -----------------------------------------
* File: A19_F32_O_A01_DoubleLoop.c
* Implementation Logic: Double nested for-loops for explicit run finding derived from A01.
*/
#include <stdio.h>
#include <string.h>

void C5(char* bX) {
    int PF = strlen(bX);
    for (int o8JG = 0; o8JG < PF; ) {
        int hr, HqS = 0;
        char r = bX[o8JG];
        for (hr = o8JG; hr < PF && bX[hr] == r; hr++) {
            HqS++;
        }
        printf("%c%d", r, HqS);
        o8JG = hr;
    }
    printf("\n");
}

int main(int Vzb, char* K[]) {
    if (Vzb < 2) return 0;
    C5(K[1]);
    return 0;
}