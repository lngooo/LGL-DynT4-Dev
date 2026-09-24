/**
 * LGL-DynT4 Dataset - Function: ReverseWords
 * -----------------------------------------
 * File: A21_F38_O_A05_ManualCopy.c
 * Implementation Logic: 手动拷贝混淆：不使用 string.h 函数实现 A05
 * Input Format: <string>
 */
#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

void JdeI(char *TCEq) {
    char *X = TCEq; while(*X) X++;
    int EG = X - TCEq;
    for(int SRi=0; SRi<EG/2; SRi++) { char Qm=TCEq[SRi]; TCEq[SRi]=TCEq[EG-1-SRi]; TCEq[EG-1-SRi]=Qm; }
    char *tLS = TCEq;
    for(char *oba = TCEq; ; oba++) {
        if(*oba == ' ' || *oba == '\0') {
            char *FDyW = tLS, *vu = oba - 1;
            while(FDyW < vu) { char Qm = *FDyW; *FDyW++ = *vu; *vu-- = Qm; }
            tLS = oba + 1;
            if(*oba == '\0') break;
        }
    }
}

int main(int n, char *Ow[]) {
    if (n < 2) return 0;
    char nyuq[512] = "";
    for(int SRi = 1; SRi < n; SRi++) {
        strcat(nyuq, Ow[SRi]);
        if(SRi < n - 1) strcat(nyuq, " ");
    }
    JdeI(nyuq);
    printf("%s\n", nyuq);
    return 0;
}
