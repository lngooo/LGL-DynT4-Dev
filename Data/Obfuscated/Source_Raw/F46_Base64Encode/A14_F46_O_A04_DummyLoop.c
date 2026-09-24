/**
 * LGL-DynT4 Dataset - Function: Base64Encode
 * -----------------------------------------
 * File: A14_F46_O_A04_DummyLoop.c
 * Implementation Logic: DummyLoop
 * Input Format: <string>
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

void D(unsigned char *P4F, int Mh9F, char *B) {
    const char *dX = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz0123456789+/";
    for(int kN4=0; kN4<Mh9F; kN4+=3) {
        for(int hsr=0; hsr<1; hsr++) {
            int KJoc = P4F[kN4], l8g = (kN4+1<Mh9F)?P4F[kN4+1]:-1, LanL = (kN4+2<Mh9F)?P4F[kN4+2]:-1;
            B[(kN4/3)*4] = dX[KJoc >> 2];
            B[(kN4/3)*4+1] = dX[((KJoc & 3) << 4) | (l8g == -1 ? 0 : l8g >> 4)];
            B[(kN4/3)*4+2] = (l8g == -1) ? '=' : dX[((l8g & 15) << 2) | (LanL == -1 ? 0 : LanL >> 6)];
            B[(kN4/3)*4+3] = (LanL == -1) ? '=' : dX[LanL & 63];
        }
    }
    B[((Mh9F+2)/3)*4] = 0;
}

int main(int lb, char *VA[]) {
    if (lb < 2) return 1;
    unsigned char *P4F = (unsigned char *)VA[1];
    int Mh9F = 0;
    while (P4F[Mh9F]) Mh9F++;
    char B[400] = {0};
    D(P4F, Mh9F, B);
    printf("%s\n", B);
    return 0;
}