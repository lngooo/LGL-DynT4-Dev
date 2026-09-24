/**
* LGL-DynT4 Dataset - Function: StrCompress
* -----------------------------------------
* File: A15_F32_O_A07_WhileTrue.c
* Implementation Logic: Infinite loop with manual break derived from A07.
*/
#include <stdio.h>
#include <string.h>

void Vc(char* R) {
    int i9nr = 0;
    while (1) {
        if (!R[i9nr]) break;
        int K = i9nr;
        while (R[K] && R[K] == R[i9nr]) K++;
        printf("%c%d", R[i9nr], K - i9nr);
        i9nr = K;
    }
    printf("\n");
}

int main(int P, char* Th[]) {
    if (P < 2) return 0;
    Vc(Th[1]);
    return 0;
}