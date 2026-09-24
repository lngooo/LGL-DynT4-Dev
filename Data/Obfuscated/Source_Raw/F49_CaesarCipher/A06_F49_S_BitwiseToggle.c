/**
 * LGL-DynT4 Dataset - Function: CaesarCipher
 * -----------------------------------------
 * File: A06_F49_S_BitwiseToggle.c
 * Implementation Logic: A06_F49_S_BitwiseToggle
 * Input Format: <string> <shift_int>
 */
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

void s4(char *Wvz, int k3kM) {

    int jhF = (k3kM % 26 + 26) % 26;
    for(int duSA=0; Wvz[duSA]; duSA++) {
        char apZA = Wvz[duSA] & 32;
        char Z = Wvz[duSA] & ~32;
        if(Z >= 'A' && Z <= 'Z') {
            Wvz[duSA] = ((Z - 'A' + jhF) % 26 + 'A') | apZA;
        }
    }
}

int main(int itIB, char *C[]) {
    if (itIB < 3) {
        return 1;
    }
    int k3kM = atoi(C[2]);
    s4(C[1], k3kM);
    printf("%s\n", C[1]);
    return 0;
}
