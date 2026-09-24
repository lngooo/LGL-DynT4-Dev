/**
 * LGL-DynT4 Dataset - Function: IsPrime
 * -----------------------------------------
 * File: A20_F06_O_A14_JumpTable.c
 * Implementation Logic: Trial division using a jump table (computed gotos).
 */
#include <stdio.h>
#include <stdlib.h>

int NyZ(int CvB) {
    if (CvB < 2) return 0;
    int tu = 2;
    void *Eu[] = {&&z9, &&sVS, &&KYpu};
z9:
    if (tu * tu > CvB) goto *Eu[1];
    if (CvB % tu == 0) goto *Eu[2];
    tu++;
    goto *Eu[0];
sVS: return 1;
KYpu: return 0;
}

int main(int r0Yz, char *h7K[]) {
    if (r0Yz < 2) return 1;
    printf("%d\n", NyZ(atoi(h7K[1])));
    return 0;
}