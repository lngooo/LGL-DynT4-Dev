/**
 * LGL-DynT4 Dataset - Function: LCP
 * -----------------------------------------
 * File: A21_F33_O_A04_LogicTernary.c
 * Implementation Logic: LogicTernary
 * Input Format: <str1> <str2> ...
 */
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

void LCP(char **strs, int n, char *res) {
    int min_s = 128;
    for(int i=0; i<n; i++) { int l = strlen(strs[i]); min_s = (l < min_s) ? l : min_s; }
    int matched = 0;
    for(int j=0; j<min_s; j++) {
        char c = strs[0][j];
        int all = 1;
        for(int k=1; k<n; k++) all = (strs[k][j] == c) ? all : 0;
        if(all) { res[j] = c; matched++; } else break;
    }
    res[matched] = '\0';
}

int main(int argc, char *argv[]) {
    if (argc < 2) return 0;
    int num_strs = argc - 1;
    char **strs = &argv[1];
    char result[128] = {0};
    LCP(strs, num_strs, result);
    printf("%s\n", result);
    return 0;
}