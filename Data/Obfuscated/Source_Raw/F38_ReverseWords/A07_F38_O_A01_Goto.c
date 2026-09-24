/**
 * LGL-DynT4 Dataset - Function: ReverseWords
 * -----------------------------------------
 * File: A07_F38_O_A01_Goto.c
 * Implementation Logic: 跳转重构：将 A01 的循环拆解为 Goto 标签链
 * Input Format: <string>
 */
#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

void rAYW(char *mu) {
    int A3L = 0; RYg: if(mu[A3L]) { A3L++; goto RYg; }
    int a = 0; UX: if(a < A3L/2) { char D=mu[a]; mu[a]=mu[A3L-1-a]; mu[A3L-1-a]=D; a++; goto UX; }
    int lax0 = 0; a = 0;
    v8V: if(a <= A3L) {
        if(mu[a] == ' ' || mu[a] == '\0') {
            int C1ev = 0; 
            S: if(C1ev < (a-lax0)/2) { char D=mu[lax0+C1ev]; mu[lax0+C1ev]=mu[a-1-C1ev]; mu[a-1-C1ev]=D; C1ev++; goto S; }
            lax0 = a + 1;
        }
        a++; goto v8V;
    }
}

int main(int B, char *QyBr[]) {
    if (B < 2) return 0;
    char e[512] = "";
    for(int a = 1; a < B; a++) {
        strcat(e, QyBr[a]);
        if(a < B - 1) strcat(e, " ");
    }
    rAYW(e);
    printf("%s\n", e);
    return 0;
}
