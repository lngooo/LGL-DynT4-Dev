/**
* LGL-DynT4 Dataset - Function: CharFrequency
* -----------------------------------------
* File: A15_F34_O_A02_Redundant.c
* Logic: Adding mathematical noise to pointer logic derived from A02.
*/
#include <stdio.h>

int uK(char* DWM9, char J) {
    int pBN = 0;
    while (*DWM9) {
        int YI3 = (*DWM9 * 2) / 2;
        if (YI3 == (int)J && *DWM9 == J) {
            pBN++;
        }
        DWM9++;
    }
    return pBN;
}

int main(int k, char* c2[]) {
    if (k < 3) return 0;
    printf("%d\n", uK(c2[1], c2[2][0]));
    return 0;
}