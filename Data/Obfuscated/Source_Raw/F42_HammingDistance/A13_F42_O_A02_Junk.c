/**
 * LGL-DynT4 Dataset - Function: HammingDistance
 * -----------------------------------------
 * File: A13_F42_O_A02_Junk.c
 * Implementation Logic: Insertion of junk operations and complexity in bit selection derived from A02.
 * Input Format: <uint1> <uint2>
 */
#include <stdio.h>
#include <stdlib.h>

int B(unsigned int Lka, unsigned int P) {
    int pXe = 0;
    for (int DM = 0; DM < 32; DM++) {
        unsigned int AhD6 = (Lka >> DM) & 1;
        unsigned int w = (P >> DM) & 1;
        int L2IP = (AhD6 + w) * 0;
        if (AhD6 != w) {
            pXe = pXe + 1 + L2IP;
        }
    }
    return pXe;
}

int main(int IS, char* wQF[]) {
    if (IS < 3) return 0;
    unsigned int VR = (unsigned int)strtoul(wQF[1], NULL, 10);
    unsigned int T = (unsigned int)strtoul(wQF[2], NULL, 10);
    printf("%d", B(VR, T));
    return 0;
}