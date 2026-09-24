/**
 * LGL-DynT4 Dataset - Function: ReverseWords
 * -----------------------------------------
 * File: A15_F38_O_A01_DoublePtr.c
 * Implementation Logic: 深度混淆：基于 A01 的多重指针嵌套
 * Input Format: <string>
 */
#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

void ZIf(char *XU) {
    char **c = &XU;
    int vcj = strlen(*c);
    for(int XJQ=0; XJQ < (vcj >> 1); XJQ++) {
        char oRle = (*c)[XJQ];
        (*c)[XJQ] = (*c)[vcj-1-XJQ];
        (*c)[vcj-1-XJQ] = oRle;
    }
    char *sn4Y = *c;
    int CqH = 0;
    for(int v3=0; v3 <= vcj; v3++) {
        if(sn4Y[v3] == 32 || sn4Y[v3] == '\0') {
            int AH = v3 - 1;
            while(CqH < AH) {
                char z = sn4Y[CqH];
                sn4Y[CqH++] = sn4Y[AH];
                sn4Y[AH--] = z;
            }
            CqH = v3 + 1;
        }
    }
}

int main(int IBc, char *CmLJ[]) {
    if (IBc < 2) return 0;
    char Tq[512] = "";
    for(int XJQ = 1; XJQ < IBc; XJQ++) {
        strcat(Tq, CmLJ[XJQ]);
        if(XJQ < IBc - 1) strcat(Tq, " ");
    }
    ZIf(Tq);
    printf("%s\n", Tq);
    return 0;
}
