/**
 * LGL-DynT4 Dataset - Function: CaesarCipher
 * -----------------------------------------
 * File: A10_F49_O_A04_RedundantLogic.c
 * Implementation Logic: A10_F49_O_A04_RedundantLogic
 * Input Format: <string> <shift_int>
 */
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

void hJpm(char *TMF, int OQJ) {

    int zJ9a = (OQJ % 26 + 26) % 26;
    for(int RDd=0; TMF[RDd]; RDd++) {
        int pV = TMF[RDd];
        int EZUf = (pV >= 'a' && pV <= 'z');
        int p2a = (pV >= 'A' && pV <= 'Z');
        if(EZUf) TMF[RDd] = (char)('a' + (pV - 'a' + zJ9a) % 26);
        if(p2a) TMF[RDd] = (char)('A' + (pV - 'A' + zJ9a) % 26);
        if(!EZUf && !p2a) TMF[RDd] = TMF[RDd];
    }
}

int main(int K, char *kb[]) {
    if (K < 3) {
        return 1;
    }
    int OQJ = atoi(kb[2]);
    hJpm(kb[1], OQJ);
    printf("%s\n", kb[1]);
    return 0;
}
