/**
 * LGL-DynT4 Dataset - Function: LCP
 * -----------------------------------------
 * File: A20_F33_O_A05_WhileTrue.c
 * Implementation Logic: WhileTrue
 * Input Format: <str1> <str2> ...
 */
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

void LCP(char **strs, int n, char *res) {
    int p = 0;
    while (1) {
        char target = strs[0][p];
        if (!target) break;
        int fail = 0;
        for (int i = 1; i < n; i++) if (strs[i][p] != target) { fail = 1; break; }
        if (fail) break;
        res[p++] = target;
    }
    res[p] = 0;
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