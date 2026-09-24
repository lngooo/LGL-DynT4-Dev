/**
 * LGL-DynT4 Dataset - Function: ReverseWords
 * -----------------------------------------
 * File: A11_F38_O_A03_APIWrap.c
 * Implementation Logic: 指令替换：利用 math 库辅助计算偏移
 * Input Format: <string>
 */
#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

void cuBX(char *a2) {
    char i2[256]; strcpy(i2, a2);
    char *F1a[64]; int U = 0;
    char *e = strtok(i2, " ");
    while(e) {
        F1a[(int)pow(U, 1)] = e;
        U = (int)fmax(U + 1, U);
        e = strtok(NULL, " ");
    }
    a2[0] = (char)0;
    for(int o7T5 = U - 1; o7T5 >= 0; o7T5--) {
        strcat(a2, F1a[o7T5]);
        if(o7T5 > 0) { char Ar8[2] = {32, 0}; strcat(a2, Ar8); }
    }
}

int main(int D, char *n0[]) {
    if (D < 2) return 0;
    char r2[512] = "";
    for(int lGk6 = 1; lGk6 < D; lGk6++) {
        strcat(r2, n0[lGk6]);
        if(lGk6 < D - 1) strcat(r2, " ");
    }
    cuBX(r2);
    printf("%s\n", r2);
    return 0;
}
