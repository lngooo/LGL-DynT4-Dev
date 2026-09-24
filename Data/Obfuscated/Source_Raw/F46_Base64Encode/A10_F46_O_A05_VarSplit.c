/**
 * LGL-DynT4 Dataset - Function: Base64Encode
 * -----------------------------------------
 * File: A10_F46_O_A05_VarSplit.c
 * Implementation Logic: VarSplit
 * Input Format: <string>
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

void X(unsigned char *Cs, int t, char *TDQ) {
    const char *yd = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz0123456789+/";
    int Kl = 0, qXW = 0;
    while (Kl + qXW < t) {
        int RHzj = Kl + qXW;
        unsigned char lJH1 = Cs[RHzj], cCA = (RHzj+1 < t)?Cs[RHzj+1]:0, qiaC = (RHzj+2 < t)?Cs[RHzj+2]:0;
        TDQ[((RHzj/3)*4)] = yd[lJH1 >> 2];
        TDQ[((RHzj/3)*4)+1] = yd[((lJH1 & 3) << 4) | (cCA >> 4)];
        TDQ[((RHzj/3)*4)+2] = (RHzj+1 < t) ? yd[((cCA & 15) << 2) | (qiaC >> 6)] : '=';
        TDQ[((RHzj/3)*4)+3] = (RHzj+2 < t) ? yd[qiaC & 63] : '=';
        Kl += 3;
    }
    TDQ[((t + 2) / 3) * 4] = 0;
}

int main(int RnjE, char *T[]) {
    if (RnjE < 2) return 1;
    unsigned char *Cs = (unsigned char *)T[1];
    int t = 0;
    while (Cs[t]) t++;
    char TDQ[400] = {0};
    X(Cs, t, TDQ);
    printf("%s\n", TDQ);
    return 0;
}