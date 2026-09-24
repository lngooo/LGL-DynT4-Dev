/**
 * LGL-DynT4 Dataset - Function: XorCipher
 * -----------------------------------------
 * File: A18_F47_O_A02_RecursiveFlatten.c
 * Implementation Logic: RecursiveFlatten
 * Input Format: <data_string> <key_string>
 */
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

static void vcS(char *P11J, char *bspx, int W4Bc, int coT) {
    if (P11J[coT] == 0) return;
    P11J[coT] ^= bspx[coT % W4Bc];
    vcS(P11J, bspx, W4Bc, coT + 1);
}
void Cr(char *P11J, char *bspx) {
    int W4Bc = 0;
    while (bspx[W4Bc]) W4Bc++;
    if (W4Bc == 0) return;
    vcS(P11J, bspx, W4Bc, 0);
}

int main(int LGpn, char *z[]) {
    if (LGpn < 3) return 0;
    char *P11J = z[1];
    char *bspx = z[2];
    int PCQn = 0;
    while (P11J[PCQn]) PCQn++;

    Cr(P11J, bspx);

    for (int SY45 = 0; SY45 < PCQn; SY45++) {
        printf("%02x", (unsigned char)P11J[SY45]);
    }
    printf("\n");
    return 0;
}