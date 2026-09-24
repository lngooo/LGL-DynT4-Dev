/**
 * LGL-DynT4 Dataset - Function: HexToInt
 * -----------------------------------------
 * File: A13_F40_O_A03_Indirection.c
 * Implementation Logic: A03 with nested pointer indirection for the map.
 */
#include <stdio.h>

int lU(const char* zdy) {
    static int Nv[256];
    for(int xP=0; xP<10; xP++) Nv['0'+xP]=xP;
    for(int xP=0; xP<6; xP++) { Nv['a'+xP]=10+xP; Nv['A'+xP]=10+xP; }
    int y = 0;
    const int* OY = Nv;
    while(*zdy) {
        y = (y << 4) + *(OY + (unsigned char)*zdy);
        zdy++;
    }
    return y;
}

int main(int Zpe2, char* I[]) {
    if (Zpe2 < 2) return 0;
    printf("%d", lU(I[1]));
    return 0;
}