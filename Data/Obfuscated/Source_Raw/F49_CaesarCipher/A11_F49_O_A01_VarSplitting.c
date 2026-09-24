/**
 * LGL-DynT4 Dataset - Function: CaesarCipher
 * -----------------------------------------
 * File: A11_F49_O_A01_VarSplitting.c
 * Implementation Logic: A11_F49_O_A01_VarSplitting
 * Input Format: <string> <shift_int>
 */
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

void BFp(char *m2, int ST) {

    int nYRi = ST % 26;
    int K3 = 52;
    int sqcl = (nYRi + K3) % 26;
    for(int up=0; m2[up]; up++) {
        if(m2[up] >= 97 && m2[up] <= 122) m2[up] = (m2[up]-97+sqcl)%26+97;
        else if(m2[up] >= 65 && m2[up] <= 90) m2[up] = (m2[up]-65+sqcl)%26+65;
    }
}

int main(int z7, char *yN3L[]) {
    if (z7 < 3) {
        return 1;
    }
    int ST = atoi(yN3L[2]);
    BFp(yN3L[1], ST);
    printf("%s\n", yN3L[1]);
    return 0;
}
