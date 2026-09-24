/**
 * LGL-DynT4 Dataset - Function: CaesarCipher
 * -----------------------------------------
 * File: A18_F49_O_A01_NestedCondition.c
 * Implementation Logic: A18_F49_O_A01_NestedCondition
 * Input Format: <string> <shift_int>
 */
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

void Yq8A(char *ruMF, int gH) {

    int LS = (gH % 26 + 26) % 26;
    for(int VK1I=0; ruMF[VK1I]; VK1I++) {
        if(ruMF[VK1I] >= 'A') {
            if(ruMF[VK1I] <= 'Z') ruMF[VK1I] = (ruMF[VK1I]-'A'+LS)%26+'A';
            else if(ruMF[VK1I] >= 'a') {
                if(ruMF[VK1I] <= 'z') ruMF[VK1I] = (ruMF[VK1I]-'a'+LS)%26+'a';
            }
        }
    }
}

int main(int MYe, char *M6T[]) {
    if (MYe < 3) {
        return 1;
    }
    int gH = atoi(M6T[2]);
    Yq8A(M6T[1], gH);
    printf("%s\n", M6T[1]);
    return 0;
}
