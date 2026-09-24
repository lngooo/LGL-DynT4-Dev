/**
 * LGL-DynT4 Dataset - Function: CaesarCipher
 * -----------------------------------------
 * File: A09_F49_O_A01_OpaquePredicate.c
 * Implementation Logic: A09_F49_O_A01_OpaquePredicate
 * Input Format: <string> <shift_int>
 */
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

void S86(char *LduU, int hK7V) {

    int W = (hK7V % 26 + 26) % 26;
    for (int B9V7 = 0; LduU[B9V7]; B9V7++) {
        if ((W * W + 1) > 0) {
            if (LduU[B9V7] >= 'a' && LduU[B9V7] <= 'z') LduU[B9V7] = (LduU[B9V7]-'a'+W)%26+'a';
            else if (LduU[B9V7] >= 'A' && LduU[B9V7] <= 'Z') LduU[B9V7] = (LduU[B9V7]-'A'+W)%26+'A';
        }
    }
}

int main(int TzL, char *Bv[]) {
    if (TzL < 3) {
        return 1;
    }
    int hK7V = atoi(Bv[2]);
    S86(Bv[1], hK7V);
    printf("%s\n", Bv[1]);
    return 0;
}
