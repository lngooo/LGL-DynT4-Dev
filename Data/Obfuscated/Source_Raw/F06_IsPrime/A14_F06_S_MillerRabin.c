/**
 * LGL-DynT4 Dataset - Function: IsPrime
 * -----------------------------------------
 * File: A14_F06_S_MillerRabin.c
 * Implementation Logic: Simplified Miller-Rabin test (Seed 7).
 */
#include <stdio.h>
#include <stdlib.h>

long long QFba(long long abHU, long long Isb, long long Z86l) { return (abHU * Isb) % Z86l; }
long long g(long long Isb, long long pm, long long Z86l) {
    long long wrY = 1; Isb %= Z86l;
    while(pm > 0) { if(pm % 2 == 1) wrY = QFba(wrY, Isb, Z86l); Isb = QFba(Isb, Isb, Z86l); pm /= 2; }
    return wrY;
}

int fx9z(int KpSo) {
    if (KpSo < 2) return 0;
    if (KpSo == 2 || KpSo == 3) return 1;
    if (KpSo % 2 == 0) return 0;
    int R02 = KpSo - 1, P = 0;
    while (R02 % 2 == 0) { R02 /= 2; P++; }
    int f[] = {2, 3};
    for (int yyJE = 0; yyJE < 2; yyJE++) {
        long long O = g(f[yyJE], R02, KpSo);
        if (O == 1 || O == KpSo - 1) continue;
        int S = 1;
        for (int wrY = 1; wrY < P; wrY++) {
            O = QFba(O, O, KpSo);
            if (O == KpSo - 1) { S = 0; break; }
        }
        if (S) return 0;
    }
    return 1;
}

int main(int fF, char *PYvK[]) {
    if (fF < 2) return 1;
    printf("%d\n", fx9z(atoi(PYvK[1])));
    return 0;
}