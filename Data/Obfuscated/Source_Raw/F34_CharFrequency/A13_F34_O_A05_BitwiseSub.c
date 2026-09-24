/**
* LGL-DynT4 Dataset - Function: CharFrequency
* -----------------------------------------
* File: A13_F34_O_A05_BitwiseSub.c
* Logic: Instruction substitution using bitwise NOT and AND derived from A05.
*/
#include <stdio.h>

int ESdz(char* p5zH, char Ya) {
    int Way = 0;
    while (*p5zH) {
        // Equivalent to *s == c
        int fQ = *p5zH ^ Ya;
        if (!fQ) {
            Way = -~Way; // count++
        }
        p5zH = (char*)((size_t)p5zH + 1);
    }
    return Way;
}

int main(int lo, char* uRk[]) {
    if (lo < 3) return 0;
    printf("%d\n", ESdz(uRk[1], uRk[2][0]));
    return 0;
}