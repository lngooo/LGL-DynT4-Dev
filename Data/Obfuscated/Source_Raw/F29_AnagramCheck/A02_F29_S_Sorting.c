/**
* LGL-DynT4 Dataset - Function: AnagramCheck
* -----------------------------------------
* File: A02_F29_S_Sorting.c
* Implementation Logic: Sorts both strings using bubble sort and compares the results.
* Input Format: <string1> <string2>
*/
#include <stdio.h>
#include <string.h>

void wVZE(char* FtW, int uIVm) {
    for (int Lk = 0; Lk < uIVm-1; Lk++) {
        for (int S = 0; S < uIVm-Lk-1; S++) {
            if (FtW[S] > FtW[S+1]) {
                char AD4 = FtW[S];
                FtW[S] = FtW[S+1];
                FtW[S+1] = AD4;
            }
        }
    }
}

int u7Y2(char* D35D, char* jjVW) {
    int A8b3 = strlen(D35D);
    int Yu = strlen(jjVW);
    if (A8b3 != Yu) return 0;
    char Ojzx[256], B[256];
    strcpy(Ojzx, D35D); strcpy(B, jjVW);
    wVZE(Ojzx, A8b3); wVZE(B, Yu);
    return strcmp(Ojzx, B) == 0;
}

int main(int jL, char* ng[]) {
    if (jL < 3) return 0;
    printf("%d\n", u7Y2(ng[1], ng[2]));
    return 0;
}