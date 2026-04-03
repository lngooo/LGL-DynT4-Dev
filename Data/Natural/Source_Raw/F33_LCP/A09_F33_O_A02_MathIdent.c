/**
 * LGL-DynT4 Dataset - Function: LCP
 * -----------------------------------------
 * File: A09_F33_O_A02_MathIdent.c
 * Implementation Logic: MathIdent
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
        while (res[j]) {
            double diff = (double)res[j] - (double)strs[i][j];
            if ((int)floor(diff * diff) != 0) break;
            j++;
        }
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