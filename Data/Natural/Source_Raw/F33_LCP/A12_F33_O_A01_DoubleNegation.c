/**
 * LGL-DynT4 Dataset - Function: LCP
 * -----------------------------------------
 * File: A12_F33_O_A01_DoubleNegation.c
 * Implementation Logic: DoubleNegation
 * Input Format: <str1> <str2> ...
 */
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

void LCP(char **strs, int n, char *res) {
    int j = 0;
    while (!!strs[0][j]) {
        int ok = 1;
        for (int i = 1; i < n; i++) if (strs[i][j] != strs[0][j]) ok = 0;
        if (!!ok) { res[j] = strs[0][j]; j++; } else break;
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