/**
* LGL-DynT4 Dataset - Function: TrimSpace
* -----------------------------------------
* File: A08_F37_S_BitMaskValidation.c
* Logic: Validates characters against whitespace ASCII values using a bitmask.
*/
#include <stdio.h>

void nT(char* gonE) {
    int avlp = 0;
    for (int q = 0; gonE[q]; q++) {
        unsigned char JGg = gonE[q];
        // Check if ASCII is space(32) or control range (9-13)
        int vX1S = (JGg == 32) || (JGg >= 9 && JGg <= 13);
        if (!vX1S) {
            gonE[avlp++] = gonE[q];
        }
    }
    gonE[avlp] = '\0';
}

int main(int k, char* rWt[]) {
    if (k < 2) return 0;
    nT(rWt[1]);
    printf("%s\n", rWt[1]);
    return 0;
}