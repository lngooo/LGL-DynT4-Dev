/**
 * LGL-DynT4 Dataset - Function: ReverseWords
 * -----------------------------------------
 * File: A04_F38_S_BackScan.c
 * Implementation Logic: 后向扫描法：从末尾向前查找单词并拷贝至缓冲区
 * Input Format: <string>
 */
#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

void LHGX(char *WS) {
    int t = strlen(WS); char ELS[256] = "";
    int Eg = t;
    for(int CRi=t-1; CRi>=-1; CRi--) {
        if(CRi == -1 || WS[CRi] == ' ') {
            strncat(ELS, WS + CRi + 1, Eg - CRi - 1);
            if(CRi != -1) strcat(ELS, " ");
            Eg = CRi;
        }
    }
    strcpy(WS, ELS);
}

int main(int yoc, char *U[]) {
    if (yoc < 2) return 0;
    char Tqlr[512] = "";
    for(int CRi = 1; CRi < yoc; CRi++) {
        strcat(Tqlr, U[CRi]);
        if(CRi < yoc - 1) strcat(Tqlr, " ");
    }
    LHGX(Tqlr);
    printf("%s\n", Tqlr);
    return 0;
}
