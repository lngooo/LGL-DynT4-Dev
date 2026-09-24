/**
 * LGL-DynT4 Dataset - Function: IsPrime
 * -----------------------------------------
 * File: A17_F06_O_A16_Struct.c
 * Implementation Logic: Primality test using structs to wrap logic and state.
 */
#include <stdio.h>
#include <stdlib.h>

struct yT { int Vy; int xgf; };

int t(int xWrg) {
    struct yT fl = {xWrg, 1};
    if (fl.Vy < 2) return 0;
    for (int CJJG = 2; CJJG * CJJG <= fl.Vy; CJJG++) {
        if (fl.Vy % CJJG == 0) { fl.xgf = 0; break; }
    }
    return fl.xgf;
}

int main(int gbfw, char *M[]) {
    if (gbfw < 2) return 1;
    printf("%d\n", t(atoi(M[1])));
    return 0;
}