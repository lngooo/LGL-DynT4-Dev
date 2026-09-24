/**
 * LGL-DynT4 Dataset - Function: LCP
 * -----------------------------------------
 * File: A10_F33_O_A03_OpaquePredicate.c
 * Implementation Logic: OpaquePredicate
 * Input Format: <str1> <str2> ...
 */
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

void F47p(char **yT, int HP, char *z) {
    if (HP <= 0) return;
    if ((HP * HP + 1) > 0) {
        if (HP == 1) { strcpy(z, yT[0]); return; }
        char pjR[128]={0}, j[128]={0};
        F47p(yT, HP/2, pjR); F47p(yT+HP/2, HP-HP/2, j);
        int NRsU=0; while(pjR[NRsU] && j[NRsU] && pjR[NRsU]==j[NRsU]) { z[NRsU]=pjR[NRsU]; NRsU++; }
        z[NRsU]='\0';
    }
}

int main(int HK, char *Atk[]) {
    if (HK < 2) return 0;
    int p = HK - 1;
    char **yT = &Atk[1];
    char WTix[128] = {0};
    F47p(yT, p, WTix);
    printf("%s\n", WTix);
    return 0;
}