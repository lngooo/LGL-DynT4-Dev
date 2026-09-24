/**
 * LGL-DynT4 Dataset - Function: XorCipher
 * -----------------------------------------
 * File: A17_F47_O_A05_Ternary.c
 * Implementation Logic: Ternary
 * Input Format: <data_string> <key_string>
 */
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

void DiR4(char *WozJ, char *x) {
    int SfH = 0; while(x[SfH]) SfH++;
    for(int HVM=0; WozJ[HVM]; HVM++) {
        int d = HVM % SfH;
        WozJ[HVM] = (d >= 0) ? (WozJ[HVM] ^ x[d]) : WozJ[HVM];
    }
}

int main(int CE, char *K1[]) {
    if (CE < 3) return 0;
    char *WozJ = K1[1];
    char *x = K1[2];
    int a = 0;
    while (WozJ[a]) a++;

    DiR4(WozJ, x);

    for (int HVM = 0; HVM < a; HVM++) {
        printf("%02x", (unsigned char)WozJ[HVM]);
    }
    printf("\n");
    return 0;
}