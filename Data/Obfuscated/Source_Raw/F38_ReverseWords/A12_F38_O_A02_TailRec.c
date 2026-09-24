/**
 * LGL-DynT4 Dataset - Function: ReverseWords
 * -----------------------------------------
 * File: A12_F38_O_A02_TailRec.c
 * Implementation Logic: 尾递归模拟：将 A02 改造为显式辅助函数模拟
 * Input Format: <string>
 */
#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

void U4Y(char *adf) {
    char *HP86 = strrchr(adf, ' ');
    if(!HP86) return;
    int kS = strlen(HP86 + 1);
    char *TCp = (char*)malloc(kS + 1);
    strcpy(TCp, HP86 + 1);
    *HP86 = '\0';
    U4Y(adf);
    char *ey87 = (char*)malloc(strlen(adf) + 1);
    strcpy(ey87, adf);
    sprintf(adf, "%s %s", TCp, ey87);
    free(TCp); free(ey87);
}

int main(int aEe, char *Y[]) {
    if (aEe < 2) return 0;
    char JPS[512] = "";
    for(int f = 1; f < aEe; f++) {
        strcat(JPS, Y[f]);
        if(f < aEe - 1) strcat(JPS, " ");
    }
    U4Y(JPS);
    printf("%s\n", JPS);
    return 0;
}
