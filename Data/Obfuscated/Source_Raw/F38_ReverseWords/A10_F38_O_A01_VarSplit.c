/**
 * LGL-DynT4 Dataset - Function: ReverseWords
 * -----------------------------------------
 * File: A10_F38_O_A01_VarSplit.c
 * Implementation Logic: 数据流混淆：对 A01 变量进行拆分与冗余化
 * Input Format: <string>
 */
#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

void W(char *i8e) {
    int xvGu = 0, D = 0; while(i8e[xvGu+D]) xvGu++;
    int DsTf = xvGu + D;
    for(int Fs=0; Fs < (DsTf >> 1); Fs++) {
        char MlYe = i8e[Fs];
        int I = DsTf - 1 - Fs;
        i8e[Fs] = i8e[I];
        i8e[I] = MlYe;
    }
    int rf = 0;
    for(int iBrl=0; iBrl <= DsTf; iBrl++) {
        if((i8e[iBrl] ^ 32) == 0 || i8e[iBrl] == 0) {
            int jM = (iBrl - rf) / 2;
            for(int vGLe=0; vGLe < jM; vGLe++) {
                char dZT4 = i8e[rf + vGLe];
                i8e[rf + vGLe] = i8e[iBrl - 1 - vGLe];
                i8e[iBrl - 1 - vGLe] = dZT4;
            }
            rf = iBrl + 1;
        }
    }
}

int main(int UUx, char *ig0[]) {
    if (UUx < 2) return 0;
    char Rsx[512] = "";
    for(int Fs = 1; Fs < UUx; Fs++) {
        strcat(Rsx, ig0[Fs]);
        if(Fs < UUx - 1) strcat(Rsx, " ");
    }
    W(Rsx);
    printf("%s\n", Rsx);
    return 0;
}
