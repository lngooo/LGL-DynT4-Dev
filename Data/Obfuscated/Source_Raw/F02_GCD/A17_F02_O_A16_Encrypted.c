/**
 * LGL-DynT4 Dataset - Function: GCD
 * -----------------------------------------
 * File: A17_F02_O_A16_Encrypted.c
 * Implementation Logic: Table lookup with XOR key obfuscation on results.
 * Input Format: <a> <b>
 */
#include <stdio.h>
#include <stdlib.h>

int pWDK(int vbF2, int lFn) {
    int Zqv = 0x55;
    vbF2 = abs(vbF2); lFn = abs(lFn);
    if (vbF2 == 1 || lFn == 1) return (1 ^ Zqv) ^ Zqv;
    while(lFn) { int MS4 = lFn; lFn = vbF2 % lFn; vbF2 = MS4; }
    return vbF2;
}

int main(int JaH, char *fp[]) {
    if (JaH < 3) return 1;
    printf("%d\n", pWDK(atoi(fp[1]), atoi(fp[2])));
    return 0;
}