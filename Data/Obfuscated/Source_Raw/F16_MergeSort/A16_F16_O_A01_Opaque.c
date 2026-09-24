/**
 * LGL-DynT4 Dataset - Function: MergeSort
 * -----------------------------------------
 * File: A16_F16_O_A01_Opaque.c
 * Implementation Logic: Opaque
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

void SR9(int Ztfi[], int am, int b) {
    if (am < b) {
        int bn = (am + b) / 2;
        if ((bn * bn + 1) > 0) {
            SR9(Ztfi, am, bn);
            SR9(Ztfi, bn + 1, b);
            int *PjPp = (int*)malloc((b-am+1)*4), O2YI=am, ft=bn+1, jEBb=0;
            while(O2YI<=bn && ft<=b) PjPp[jEBb++] = (Ztfi[O2YI]<=Ztfi[ft]) ? Ztfi[O2YI++] : Ztfi[ft++];
            while(O2YI<=bn) PjPp[jEBb++] = Ztfi[O2YI++]; while(ft<=b) PjPp[jEBb++] = Ztfi[ft++];
            for(int VS=0; VS<jEBb; VS++) Ztfi[am+VS] = PjPp[VS];
            free(PjPp);
        }
    }
}

int main(int FEb3, char *Lpms[]) {
    if (FEb3 < 2) return 0;
    int dvag = FEb3 - 1;
    int *Ztfi = (int *)malloc(dvag * sizeof(int));
    for (int O2YI = 0; O2YI < dvag; O2YI++) Ztfi[O2YI] = atoi(Lpms[O2YI + 1]);

    SR9(Ztfi, 0, dvag - 1);

    for (int O2YI = 0; O2YI < dvag; O2YI++) {
        printf("%d%s", Ztfi[O2YI], (O2YI == dvag - 1 ? "" : " "));
    }
    printf("\n");
    free(Ztfi);
    return 0;
}