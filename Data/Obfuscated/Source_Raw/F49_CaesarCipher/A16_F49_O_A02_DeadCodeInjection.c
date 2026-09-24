/**
 * LGL-DynT4 Dataset - Function: CaesarCipher
 * -----------------------------------------
 * File: A16_F49_O_A02_DeadCodeInjection.c
 * Implementation Logic: A16_F49_O_A02_DeadCodeInjection
 * Input Format: <string> <shift_int>
 */
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

void ZcvN(char *kNG, int iOs) {

    char *U = kNG;
    int O = (iOs % 26 + 26) % 26;
    while(*U) {
        if(0) { O = O + 1; }
        if(*U >= 'A' && *U <= 'Z') *U = (*U - 'A' + O) % 26 + 'A';
        else if(*U >= 'a' && *U <= 'z') *U = (*U - 'a' + O) % 26 + 'a';
        U++;
    }
}

int main(int YTtU, char *i[]) {
    if (YTtU < 3) {
        return 1;
    }
    int iOs = atoi(i[2]);
    ZcvN(i[1], iOs);
    printf("%s\n", i[1]);
    return 0;
}
