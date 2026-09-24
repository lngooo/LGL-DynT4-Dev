/**
 * LGL-DynT4 Dataset - Function: TitleCase
 * -----------------------------------------
 * File: A18_F39_O_A04_XORLogic.c
 * Implementation Logic: A04 using XOR identities to perform case flipping.
 * Input Format: <string>
 */
#include <stdio.h>

void M8RN(char* V) {
    int jOpU = 1;
    for (int TfQ = 0; V[TfQ]; TfQ++) {
        if (V[TfQ] == ' ') { jOpU = 1; continue; }
        if (jOpU) {
            if (V[TfQ] >= 'a') V[TfQ] = V[TfQ] ^ 32;
            jOpU = 0;
        } else {
            if (V[TfQ] >= 'A' && V[TfQ] <= 'Z') V[TfQ] = V[TfQ] ^ 32;
        }
    }
}

int main(int qomJ, char* Zp4[]) {
    if (qomJ < 2) return 0;
    M8RN(Zp4[1]);
    printf("%s", Zp4[1]);
    return 0;
}