/**
* LGL-DynT4 Dataset - Function: WordCount
* -----------------------------------------
* File: A12_F31_O_A01_VarSplit.c
* Implementation Logic: Variable splitting (count split into c1 and c2) derived from A01[cite: 17].
*/
#include <stdio.h>
#include <ctype.h>

int htp(char* F79z) {
    int zB = 0, sp = 0, vk = 0;
    while (*F79z) {
        if (isspace(*F79z)) vk = 0;
        else if (vk == 0) {
            vk = 1;
            if (zB < 100) zB++; else sp++;
        }
        F79z++;
    }
    return zB + sp;
}

int main(int Ly2, char* g[]) {
    if (Ly2 < 2) return 0;
    printf("%d\n", htp(g[1]));
    return 0;
}