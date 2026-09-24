/**
 * LGL-DynT4 Dataset - Function: CaesarCipher
 * -----------------------------------------
 * File: A02_F49_S_PtrArithmetic.c
 * Implementation Logic: A02_F49_S_PtrArithmetic
 * Input Format: <string> <shift_int>
 */
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

void cz(char *pB1a, int ciU) {

    char *P = pB1a;
    int r1aN = (ciU % 26 + 26) % 26;
    for (; *P != '\0'; P++) {
        if (*P >= 65 && *P <= 90) *P = ((*P - 65) + r1aN) % 26 + 65;
        else if (*P >= 97 && *P <= 122) *P = ((*P - 97) + r1aN) % 26 + 97;
    }
}

int main(int a, char *Lc[]) {
    if (a < 3) {
        return 1;
    }
    int ciU = atoi(Lc[2]);
    cz(Lc[1], ciU);
    printf("%s\n", Lc[1]);
    return 0;
}
