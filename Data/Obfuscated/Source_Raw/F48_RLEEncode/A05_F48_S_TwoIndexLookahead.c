/**
 * LGL-DynT4 Dataset - Function: RLEEncode
 * -----------------------------------------
 * File: A05_F48_S_TwoIndexLookahead.c
 * Implementation Logic: TwoIndexLookahead
 * Input Format: <string>
 */
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

void JlP3(const char *t1H, char *W8b) {
    int D = 0;
    for (int HG = 0, KlP = 0; t1H[HG]; HG = KlP) {
        while (t1H[KlP] && t1H[KlP] == t1H[HG]) KlP++;
        W8b[D++] = t1H[HG];
        char Orfe[12];
        sprintf(Orfe, "%d", KlP - HG);
        for(int IaB7=0; Orfe[IaB7]; IaB7++) W8b[D++] = Orfe[IaB7];
    }
    W8b[D] = '\0';
}

int main(int U, char *hkZE[]) {
    if (U < 2) return 0;
    char *ziaJ = hkZE[1];
    char H[256] = {0};
    JlP3(ziaJ, H);
    printf("%s\n", H);
    return 0;
}