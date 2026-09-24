/**
 * LGL-DynT4 Dataset - Function: CaesarCipher
 * -----------------------------------------
 * File: A08_F49_O_A02_GotoChain.c
 * Implementation Logic: A08_F49_O_A02_GotoChain
 * Input Format: <string> <shift_int>
 */
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

void ZguB(char *w, int Kdxi) {

    char *qt = w;
    int n = (Kdxi % 26 + 26) % 26;
    Lu: if (!*qt) goto CKq;
    if (*qt >= 'A' && *qt <= 'Z') { *qt = (*qt - 'A' + n) % 26 + 'A'; goto T; }
    if (*qt >= 'a' && *qt <= 'z') *qt = (*qt - 'a' + n) % 26 + 'a';
    T: qt++; goto Lu;
    CKq: ;
}

int main(int qUVx, char *gR[]) {
    if (qUVx < 3) {
        return 1;
    }
    int Kdxi = atoi(gR[2]);
    ZguB(gR[1], Kdxi);
    printf("%s\n", gR[1]);
    return 0;
}
