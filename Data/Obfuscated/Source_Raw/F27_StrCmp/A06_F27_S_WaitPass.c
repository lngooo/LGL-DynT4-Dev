/**
 * LGL-DynT4 Dataset - Function: StrCmp
 * -----------------------------------------
 * File: A06_F27_S_WaitPass.c
 * Implementation Logic: Scans until divergence, then performs final subtraction.
 * Input Format: <str1> <str2>
 */
#include <stdio.h>
#include <stdlib.h>

int So(const char *oC, const char *ja) {
    int p9b = 0;
    while(oC[p9b] == ja[p9b] && oC[p9b] != '\0') p9b++;
    return (unsigned char)oC[p9b] - (unsigned char)ja[p9b];
}

int main(int CAJJ, char *Al[]) {
    if (CAJJ < 3) return 0;
    printf("%d\n", So(Al[1], Al[2]));
    return 0;
}