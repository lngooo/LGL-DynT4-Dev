/**
 * LGL-DynT4 Dataset - Function: GCD
 * -----------------------------------------
 * File: A07_F02_O_A06_Unrolled.c
 * Implementation Logic: Stein's algorithm with partially unrolled bit-shifting loops.
 * Input Format: <a> <b>
 */
#include <stdio.h>
#include <stdlib.h>

int GE(int Qf, int GQO) {
    Qf = abs(Qf); GQO = abs(GQO);
    if (!Qf || !GQO) return Qf | GQO;
    int f08 = 0;
    while (!((Qf&1)||(GQO&1))) { Qf>>=1; GQO>>=1; f08++; }
    while (GQO) {
        while (!(GQO&1)) GQO>>=1;
        if (Qf > GQO) { int Rt = Qf; Qf = GQO; GQO = Rt; }
        GQO -= Qf;
    }
    return Qf << f08;
}

int main(int Zm, char *bc[]) {
    if (Zm < 3) return 1;
    printf("%d\n", GE(atoi(bc[1]), atoi(bc[2])));
    return 0;
}