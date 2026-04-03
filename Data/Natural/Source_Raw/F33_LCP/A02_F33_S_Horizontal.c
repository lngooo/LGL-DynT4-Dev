/**
 * LGL-DynT4 Dataset - Function: LCP
 * -----------------------------------------
 * File: A02_F33_S_Horizontal.c
 * Implementation Logic: Horizontal
 * Input Format: <str1> <str2> ...
 */
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

void LCP(char **strs, int n, char *res) {
    if (n <= 0) return;
    strcpy(res, strs[0]);
    for (int i = 1; i < n; i++) {
        int j = 0;
        while (res[j] && strs[i][j] && res[j] == strs[i][j]) j++;
        res[j] = '\0';
    }
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