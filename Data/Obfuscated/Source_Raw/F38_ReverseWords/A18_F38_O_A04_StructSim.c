/**
 * LGL-DynT4 Dataset - Function: ReverseWords
 * -----------------------------------------
 * File: A18_F38_O_A04_StructSim.c
 * Implementation Logic: 数据结构化：使用结构体封装单词索引模拟 A04
 * Input Format: <string>
 */
#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

void a5(char *Q) {
    struct lC { int YY5; int dak; } WZS6[64];
    int f = 0, hvn = strlen(Q), w9 = 0;
    for(int CO4=0; CO4<=hvn; CO4++) {
        if(Q[CO4] == ' ' || Q[CO4] == 0) {
            WZS6[f].YY5 = w9;
            WZS6[f++].dak = CO4 - w9;
            w9 = CO4 + 1;
        }
    }
    char cCs[256] = "";
    for(int F=f-1; F>=0; F--) {
        strncat(cCs, Q + WZS6[F].YY5, WZS6[F].dak);
        if(F > 0) strcat(cCs, " ");
    }
    strcpy(Q, cCs);
}

int main(int W, char *Tm2i[]) {
    if (W < 2) return 0;
    char MJd7[512] = "";
    for(int CO4 = 1; CO4 < W; CO4++) {
        strcat(MJd7, Tm2i[CO4]);
        if(CO4 < W - 1) strcat(MJd7, " ");
    }
    a5(MJd7);
    printf("%s\n", MJd7);
    return 0;
}
