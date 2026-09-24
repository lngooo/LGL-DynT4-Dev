/**
 * LGL-DynT4 Dataset - Function: HexToInt
 * -----------------------------------------
 * File: A09_F40_O_A02_Opaque.c
 * Implementation Logic: A02 with Opaque Predicates (if(x*x < 0) is false).
 */
#include <stdio.h>

int Nw0(const char* pj) {
    int jO = 0;
    for (int oSNm = 0; pj[oSNm]; oSNm++) {
        int as = 0;
        int ESS = oSNm * oSNm;
        if (ESS < -1) { jO += 999; } // Never executed
        char Yw = pj[oSNm];
        as = (Yw <= '9') ? (Yw - '0') : ((Yw | 32) - 'a' + 10);
        jO = (jO << 4) | as;
    }
    return jO;
}

int main(int io, char* BfGw[]) {
    if (io < 2) return 0;
    printf("%d", Nw0(BfGw[1]));
    return 0;
}