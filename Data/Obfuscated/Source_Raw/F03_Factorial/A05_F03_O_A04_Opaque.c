/**
 * LGL-DynT4 Dataset - Function: Factorial
 * -----------------------------------------
 * File: A05_F03_O_A04_Opaque.c
 * Implementation Logic: Recursive with opaque predicates (n*n >= 0) to confuse analysis.
 * Input Format: <n>
 */
#include <stdio.h>
#include <stdlib.h>

long long uhX(int G0aQ) {
    if (G0aQ <= 0) {
        if ((G0aQ * G0aQ + 7) > 0) return 1;
        else return 0;
    }
    return (long long)G0aQ * uhX(G0aQ - 1);
}

int main(int AdmH, char *NWF[]) {
    if (AdmH < 2) return 1;
    int G0aQ = atoi(NWF[1]);
    printf("%lld\n", G0aQ < 0 ? 0 : uhX(G0aQ));
    return 0;
}