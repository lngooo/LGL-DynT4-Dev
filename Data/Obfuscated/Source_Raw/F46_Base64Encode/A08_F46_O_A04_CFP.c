/**
 * LGL-DynT4 Dataset - Function: Base64Encode
 * -----------------------------------------
 * File: A08_F46_O_A04_CFP.c
 * Implementation Logic: CFP
 * Input Format: <string>
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

void Lx(unsigned char *Ggvx, int jy2, char *W) {
    const char *koUy = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz0123456789+/";
    int j = 0, YsB = 0, XrB = 0;
    while (j != -1) {
        switch(j) {
            case 0: j = (YsB < jy2) ? 1 : -1; break;
            case 1: W[XrB++] = koUy[Ggvx[YsB] >> 2];
                    W[XrB++] = koUy[((Ggvx[YsB] & 3) << 4) | (YsB+1 < jy2 ? Ggvx[YsB+1] >> 4 : 0)];
                    j = (YsB+1 < jy2) ? 2 : 3; break;
            case 2: W[XrB++] = koUy[((Ggvx[YsB+1] & 15) << 2) | (YsB+2 < jy2 ? Ggvx[YsB+2] >> 6 : 0)];
                    j = (YsB+2 < jy2) ? 4 : 5; break;
            case 3: W[XrB++] = '='; W[XrB++] = '='; YsB += 3; j = 0; break;
            case 4: W[XrB++] = koUy[Ggvx[YsB+2] & 63]; YsB += 3; j = 0; break;
            case 5: W[XrB++] = '='; YsB += 3; j = 0; break;
        }
    }
    W[XrB] = '\0';
}

int main(int Djcw, char *C[]) {
    if (Djcw < 2) return 1;
    unsigned char *Ggvx = (unsigned char *)C[1];
    int jy2 = 0;
    while (Ggvx[jy2]) jy2++;
    char W[400] = {0};
    Lx(Ggvx, jy2, W);
    printf("%s\n", W);
    return 0;
}