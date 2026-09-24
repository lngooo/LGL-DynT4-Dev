/**
 * LGL-DynT4 Dataset - Function: ReverseWords
 * -----------------------------------------
 * File: A03_F38_S_StackSim.c
 * Implementation Logic: 数组模拟栈：利用单词指针数组逆序重组
 * Input Format: <string>
 */
#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

void Q9x(char *qBd) {
    char *I4[128]; int SeE = 0;
    char CT[256]; strcpy(CT, qBd);
    char *a = strtok(CT, " ");
    while(a) { I4[SeE++] = a; a = strtok(NULL, " "); }
    qBd[0] = '\0';
    for(int pPM=SeE-1; pPM>=0; pPM--) {
        strcat(qBd, I4[pPM]);
        if(pPM > 0) strcat(qBd, " ");
    }
}

int main(int j, char *GGQq[]) {
    if (j < 2) return 0;
    char ZNKL[512] = "";
    for(int pPM = 1; pPM < j; pPM++) {
        strcat(ZNKL, GGQq[pPM]);
        if(pPM < j - 1) strcat(ZNKL, " ");
    }
    Q9x(ZNKL);
    printf("%s\n", ZNKL);
    return 0;
}
