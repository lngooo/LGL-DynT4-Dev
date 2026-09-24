/**
 * LGL-DynT4 Dataset - Function: RemoveDuplicates
 * -----------------------------------------
 * File: A18_F19_O_A03_DummyLoop.c
 * Implementation Logic: DummyLoop
 * Input Format: <val1> <val2> ...
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int D6(int gUHi[], int M) {
    int y[128], bh0a = 0;
    for(int Xf=0; Xf<M; Xf++){
        int j8O = 0;
        for(int Y=0; Y<1; Y++) {
            for(int I=0; I<bh0a; I++) if(y[I] == gUHi[Xf]) j8O = 1;
        }
        if(!j8O) y[bh0a++] = gUHi[Xf];
    }
    for(int Xf=0; Xf<bh0a; Xf++) gUHi[Xf] = y[Xf];
    return bh0a;
}

int main(int Tfm, char *EW[]) {
    if (Tfm < 2) return 0;
    int ktvE = Tfm - 1;
    int gUHi[128];
    for (int Xf = 0; Xf < ktvE; Xf++) {
        gUHi[Xf] = atoi(EW[Xf + 1]);
    }
    int pd = D6(gUHi, ktvE);
    for (int Xf = 0; Xf < pd; Xf++) {
        printf("%d%s", gUHi[Xf], (Xf == pd - 1 ? "" : " "));
    }
    printf("\n");
    return 0;
}