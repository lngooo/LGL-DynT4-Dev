/**
 * LGL-DynT4 Dataset - Function: ReverseWords
 * -----------------------------------------
 * File: A17_F38_O_A03_LogicSplit.c
 * Implementation Logic: 逻辑拆分：将 A03 的 Token 提取与重组分离
 * Input Format: <string>
 */
#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

void f(char *D) {
    char gMRb[256]; strcpy(gMRb, D);
    char *vZ[100]; int T8C = 0;
    char *dRSl = strtok(gMRb, " ");
    do {
        if(dRSl) vZ[T8C++] = dRSl;
    } while((dRSl = strtok(NULL, " ")));
    D[0] = 0;
    while(T8C > 0) {
        strcat(D, vZ[--T8C]);
        if(T8C > 0) strcat(D, " ");
    }
}

int main(int Ob, char *TNx6[]) {
    if (Ob < 2) return 0;
    char u0[512] = "";
    for(int S8f = 1; S8f < Ob; S8f++) {
        strcat(u0, TNx6[S8f]);
        if(S8f < Ob - 1) strcat(u0, " ");
    }
    f(u0);
    printf("%s\n", u0);
    return 0;
}
