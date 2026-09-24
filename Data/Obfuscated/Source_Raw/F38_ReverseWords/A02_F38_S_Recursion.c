/**
 * LGL-DynT4 Dataset - Function: ReverseWords
 * -----------------------------------------
 * File: A02_F38_S_Recursion.c
 * Implementation Logic: 递归拆解法：递归查找空格并重新拼接
 * Input Format: <string>
 */
#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

void uU(char *rN) {
    char *v2 = strchr(rN, ' ');
    if(!v2) return;
    char ta[256]; strcpy(ta, v2 + 1);
    uU(ta);
    int S = v2 - rN;
    rN[S] = '\0';
    char G[256]; strcpy(G, rN);
    sprintf(rN, "%s %s", ta, G);
}

int main(int T, char *CEGs[]) {
    if (T < 2) return 0;
    char B[512] = "";
    for(int lrq = 1; lrq < T; lrq++) {
        strcat(B, CEGs[lrq]);
        if(lrq < T - 1) strcat(B, " ");
    }
    uU(B);
    printf("%s\n", B);
    return 0;
}
