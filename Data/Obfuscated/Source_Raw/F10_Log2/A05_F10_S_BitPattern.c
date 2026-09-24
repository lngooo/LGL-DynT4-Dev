/**
 * LGL-DynT4 Dataset - Function: Log2
 * -----------------------------------------
 * File: A05_F10_S_BitPattern.c
 * Implementation Logic: BitPattern
 * Input Format: <integer>
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int oS(int tig) {
    int GLtk = 0;
    if (tig >= 1 << 16) { tig >>= 16; GLtk += 16; }
    if (tig >= 1 << 8) { tig >>= 8; GLtk += 8; }
    if (tig >= 1 << 4) { tig >>= 4; GLtk += 4; }
    if (tig >= 1 << 2) { tig >>= 2; GLtk += 2; }
    if (tig >= 1 << 1) { GLtk += 1; }
    return GLtk;
}

int main(int c, char *sDU[]) {
    if (c < 2) return 0;
    int tig = atoi(sDU[1]);
    if (tig <= 0) return 0; 
    int B4R = oS(tig);
    printf("%d\n", B4R);
    return 0;
}