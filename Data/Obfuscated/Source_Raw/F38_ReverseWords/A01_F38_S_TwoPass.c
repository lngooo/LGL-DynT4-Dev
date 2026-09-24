/**
 * LGL-DynT4 Dataset - Function: ReverseWords
 * -----------------------------------------
 * File: A01_F38_S_TwoPass.c
 * Implementation Logic: 双指针翻转法：先翻转整串，再翻转每个单词
 * Input Format: <string>
 */
#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

void Qs(char *Fk) {
    int m = strlen(Fk);
    for(int Rk0e=0; Rk0e<m/2; Rk0e++) { char wTaP=Fk[Rk0e]; Fk[Rk0e]=Fk[m-1-Rk0e]; Fk[m-1-Rk0e]=wTaP; }
    int Z = 0;
    for(int Rk0e=0; Rk0e<=m; Rk0e++) {
        if(Fk[Rk0e] == ' ' || Fk[Rk0e] == '\0') {
            for(int M=0; M<(Rk0e-Z)/2; M++) { char wTaP=Fk[Z+M]; Fk[Z+M]=Fk[Rk0e-1-M]; Fk[Rk0e-1-M]=wTaP; }
            Z = Rk0e + 1;
        }
    }
}

int main(int p0cq, char *TOm[]) {
    if (p0cq < 2) return 0;
    char y[512] = "";
    for(int Rk0e = 1; Rk0e < p0cq; Rk0e++) {
        strcat(y, TOm[Rk0e]);
        if(Rk0e < p0cq - 1) strcat(y, " ");
    }
    Qs(y);
    printf("%s\n", y);
    return 0;
}
