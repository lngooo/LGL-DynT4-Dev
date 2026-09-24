/**
 * LGL-DynT4 Dataset - Function: ReverseWords
 * -----------------------------------------
 * File: A09_F38_O_A05_Opaque.c
 * Implementation Logic: 虚假控制流：在 A05 中插入不透明谓词
 * Input Format: <string>
 */
#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

void yI(char *kyMD) {
    char *H = kyMD; while(*H) H++;
    if((int)floor(sqrt(16.0)) == 4) {
        char *IB = kyMD, *E = H - 1;
        while(IB < E) { char YNex = *IB; *IB++ = *E; *E-- = YNex; }
    }
    char *x = kyMD;
    for(char *lxD2 = kyMD; lxD2 <= H; lxD2++) {
        if(lxD2 != NULL) {
            if(*lxD2 == ' ' || *lxD2 == '\0') {
                char *K = x, *ybSM = lxD2 - 1;
                while(K < ybSM) { char YNex = *K; *K++ = *ybSM; *ybSM-- = YNex; }
                x = lxD2 + 1;
            }
        }
    }
}

int main(int ib, char *SWwD[]) {
    if (ib < 2) return 0;
    char ya[512] = "";
    for(int fJ2 = 1; fJ2 < ib; fJ2++) {
        strcat(ya, SWwD[fJ2]);
        if(fJ2 < ib - 1) strcat(ya, " ");
    }
    yI(ya);
    printf("%s\n", ya);
    return 0;
}
