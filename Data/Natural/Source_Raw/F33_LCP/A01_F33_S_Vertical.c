/**
 * LGL-DynT4 Dataset - Function: LCP
 * -----------------------------------------
 * File: A01_F33_S_Vertical.c
 * Implementation Logic: Vertical
 * Input Format: <str1> <str2> ...
 */
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

void LCP(char **strs, int n, char *res) {
    if (n <= 0) return;
    int idx = 0;
    while (strs[0][idx]) {
        char c = strs[0][idx];
        for (int i = 1; i < n; i++) {
            if (strs[i][idx] != c) { res[idx] = '\0'; return; }
        }
        res[idx] = c;
        idx++;
    }
    res[idx] = '\0';
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