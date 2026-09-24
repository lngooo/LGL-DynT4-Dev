/**
 * LGL-DynT4 Dataset - Function: CaesarCipher
 * -----------------------------------------
 * File: A03_F49_S_Recursive.c
 * Implementation Logic: A03_F49_S_Recursive
 * Input Format: <string> <shift_int>
 */
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

void k(char *Z, int Ob) {

    if (*Z == '\0') return;
    int xi = (Ob % 26 + 26) % 26;
    if (*Z >= 'A' && *Z <= 'Z') *Z = (*Z - 'A' + xi) % 26 + 'A';
    else if (*Z >= 'a' && *Z <= 'z') *Z = (*Z - 'a' + xi) % 26 + 'a';
    k(Z + 1, Ob);
}

int main(int M, char *vkS[]) {
    if (M < 3) {
        return 1;
    }
    int Ob = atoi(vkS[2]);
    k(vkS[1], Ob);
    printf("%s\n", vkS[1]);
    return 0;
}
