/**
 * LGL-DynT4 Dataset - Function: LCP
 * -----------------------------------------
 * File: A13_F33_O_A04_DummyLoop.c
 * Implementation Logic: DummyLoop
 * Input Format: <str1> <str2> ...
 */
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

void m1H(char **Lu4, int z, char *Zj) {
    int f = 0; while(Lu4[0][f]) f++;
    for(int T=0; T<f; T++) {
        int HDU4 = 1;
        for(int I=0; I<1; I++) {
            for(int M=1; M<z; M++) if(Lu4[M][T] != Lu4[0][T]) HDU4 = 0;
        }
        if(HDU4) Zj[T] = Lu4[0][T]; else { Zj[T] = 0; return; }
    }
    Zj[f] = 0;
}

int main(int pL, char *O[]) {
    if (pL < 2) return 0;
    int Fn = pL - 1;
    char **Lu4 = &O[1];
    char zP[128] = {0};
    m1H(Lu4, Fn, zP);
    printf("%s\n", zP);
    return 0;
}