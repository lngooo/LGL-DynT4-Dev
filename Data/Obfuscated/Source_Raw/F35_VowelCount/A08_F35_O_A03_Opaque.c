/**
 * LGL-DynT4 Dataset - Function: VowelCount
 * -----------------------------------------
 * File: A08_F35_O_A03_Opaque.c
 * Logic: Lookup table with opaque predicates.
 */
#include <stdio.h>
#include <stdlib.h>

int JVlR(const char* s2H) {
    int yLNT[256] = {0};
    int jF92 = 7, BC = 14;
    yLNT['a']=yLNT['e']=yLNT['i']=yLNT['o']=yLNT['u']=yLNT['A']=yLNT['E']=yLNT['I']=yLNT['O']=yLNT['U']=1;
    int U8sP = 0;
    while (*s2H) {
        if (BC == jF92 * 2) { // Opaque predicate
            if (yLNT[(unsigned char)*s2H]) U8sP++;
            s2H++;
        } else {
            s2H--; // Dead code
        }
    }
    return U8sP;
}

int main(int jVai, char* GVT[]) {
    if (jVai < 2) { printf("0\n"); return 0; }
    printf("%d\n", JVlR(GVT[1]));
    return 0;
}