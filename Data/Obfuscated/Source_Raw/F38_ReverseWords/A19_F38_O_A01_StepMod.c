/**
 * LGL-DynT4 Dataset - Function: ReverseWords
 * -----------------------------------------
 * File: A19_F38_O_A01_StepMod.c
 * Implementation Logic: 循环步长混淆：修改 A01 的翻转步长逻辑
 * Input Format: <string>
 */
#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

void TVL(char *Pb6) {
    int QW = 0; while(Pb6[QW]) QW++;
    for(int d=0; d < QW/2; d+=1) {
        char z = Pb6[d]; Pb6[d] = Pb6[QW-1-d]; Pb6[QW-1-d] = z;
    }
    int RNn = 0;
    while(RNn < QW) {
        int XUa = RNn;
        while(Pb6[XUa] != ' ' && Pb6[XUa] != 0) XUa++;
        for(int S5=0; S5 < (XUa-RNn)/2; S5++) {
            char a = Pb6[RNn+S5];
            Pb6[RNn+S5] = Pb6[XUa-1-S5];
            Pb6[XUa-1-S5] = a;
        }
        RNn = XUa + 1;
    }
}

int main(int wi8, char *cGNS[]) {
    if (wi8 < 2) return 0;
    char eeI[512] = "";
    for(int d = 1; d < wi8; d++) {
        strcat(eeI, cGNS[d]);
        if(d < wi8 - 1) strcat(eeI, " ");
    }
    TVL(eeI);
    printf("%s\n", eeI);
    return 0;
}
