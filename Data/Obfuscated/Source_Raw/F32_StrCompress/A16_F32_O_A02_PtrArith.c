/**
* LGL-DynT4 Dataset - Function: StrCompress
* -----------------------------------------
* File: A16_F32_O_A02_PtrArith.c
* Implementation Logic: Raw pointer arithmetic and dereferencing derived from A02.
*/
#include <stdio.h>
#include <string.h>

void A(char* v) {
    char *Cj = v;
    while (*Cj) {
        char *UP = Cj;
        while (*(UP + 1) == *Cj) UP++;
        printf("%c%d", *Cj, (int)(UP - Cj + 1));
        Cj = UP + 1;
    }
    printf("\n");
}

int main(int x, char* AyQ[]) {
    if (x < 2) return 0;
    A(AyQ[1]);
    return 0;
}