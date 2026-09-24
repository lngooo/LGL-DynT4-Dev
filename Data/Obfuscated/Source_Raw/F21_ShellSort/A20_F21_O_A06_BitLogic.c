/**
 * LGL-DynT4 Dataset - Function: ShellSort
 * -----------------------------------------
 * File: A20_F21_O_A06_BitLogic.c
 * Implementation Logic: 基于 A06 深度异或混淆 [cite: 22, 28]
 * Input Format: <int1> <int2> ...
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>

void ze6(int *y9EM, int KT) {
    for(int iSu=KT/2;iSu>0;iSu/=2){for(int LN1=iSu;LN1<KT;LN1++){for(int ecb2=LN1;ecb2>=iSu;ecb2-=iSu){if(y9EM[ecb2-iSu]>y9EM[ecb2]){y9EM[ecb2]=y9EM[ecb2]^y9EM[ecb2-iSu];y9EM[ecb2-iSu]=y9EM[ecb2]^y9EM[ecb2-iSu];y9EM[ecb2]=y9EM[ecb2]^y9EM[ecb2-iSu];}else break;}}}
}

int main(int og, char *F[]) {
    if (og < 2) return 0;
    int KT = og - 1;
    int *y9EM = (int *)malloc(KT * sizeof(int));
    for (int LN1 = 0; LN1 < KT; LN1++) y9EM[LN1] = atoi(F[LN1+1]);
    ze6(y9EM, KT);
    for (int LN1 = 0; LN1 < KT; LN1++) printf("%d%c", y9EM[LN1], LN1 == KT - 1 ? '\n' : ' ');
    free(y9EM);
    return 0;
}
