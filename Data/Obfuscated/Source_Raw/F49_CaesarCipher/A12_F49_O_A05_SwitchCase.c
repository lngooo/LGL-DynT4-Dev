/**
 * LGL-DynT4 Dataset - Function: CaesarCipher
 * -----------------------------------------
 * File: A12_F49_O_A05_SwitchCase.c
 * Implementation Logic: A12_F49_O_A05_SwitchCase
 * Input Format: <string> <shift_int>
 */
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

void qk(char *E6pN, int oU) {

    int Pjc = (oU % 26 + 26) % 26;
    for(int pR=0; E6pN[pR]; pR++) {
        int bK = (E6pN[pR] >= 'a' && E6pN[pR] <= 'z') ? 1 : (E6pN[pR] >= 'A' && E6pN[pR] <= 'Z' ? 2 : 0);
        switch(bK) {
            case 1: E6pN[pR] = (E6pN[pR]-'a'+Pjc)%26+'a'; break;
            case 2: E6pN[pR] = (E6pN[pR]-'A'+Pjc)%26+'A'; break;
            default: break;
        }
    }
}

int main(int q, char *e[]) {
    if (q < 3) {
        return 1;
    }
    int oU = atoi(e[2]);
    qk(e[1], oU);
    printf("%s\n", e[1]);
    return 0;
}
