/**
 * LGL-DynT4 Dataset - Function: LCP
 * -----------------------------------------
 * File: A06_F33_S_RecursiveStep.c
 * Implementation Logic: RecursiveStep
 * Input Format: <str1> <str2> ...
 */
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

void LCP(char **strs, int n, char *res) {
    if (n == 1) { strcpy(res, strs[0]); return; }
    char sub[128] = {0};
    LCP(strs, n - 1, sub);
    int j = 0;
    while (sub[j] && strs[n-1][j] && sub[j] == strs[n-1][j]) {
        res[j] = sub[j]; j++;
    }
    res[j] = '\0';
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