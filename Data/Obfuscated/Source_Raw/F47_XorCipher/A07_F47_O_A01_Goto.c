/**
 * LGL-DynT4 Dataset - Function: XorCipher
 * -----------------------------------------
 * File: A07_F47_O_A01_Goto.c
 * Implementation Logic: Goto
 * Input Format: <data_string> <key_string>
 */
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

void xt(char *XO, char *Vxf) {
    int kJkl = 0, wa = 0;
    while(Vxf[wa]) wa++;
I:
    if (XO[kJkl] == '\0') goto wU;
    XO[kJkl] = XO[kJkl] ^ Vxf[kJkl % wa];
    kJkl++;
    goto I;
wU:;
}

int main(int kW4t, char *lJAm[]) {
    if (kW4t < 3) return 0;
    char *XO = lJAm[1];
    char *Vxf = lJAm[2];
    int lPa = 0;
    while (XO[lPa]) lPa++;

    xt(XO, Vxf);

    for (int kJkl = 0; kJkl < lPa; kJkl++) {
        printf("%02x", (unsigned char)XO[kJkl]);
    }
    printf("\n");
    return 0;
}