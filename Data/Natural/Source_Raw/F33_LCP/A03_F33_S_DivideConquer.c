/**
 * LGL-DynT4 Dataset - Function: LCP
 * -----------------------------------------
 * File: A03_F33_S_DivideConquer.c
 * Implementation Logic: DivideConquer
 * Input Format: <str1> <str2> ...
 */
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

void LCP(char **strs, int n, char *res) {
    if (n <= 0) return;
    if (n == 1) { strcpy(res, strs[0]); return; }
    char l_res[128] = {0}, r_res[128] = {0};
    int mid = n / 2;
    LCP(strs, mid, l_res);
    LCP(strs + mid, n - mid, r_res);
    int i = 0;
    while (l_res[i] && r_res[i] && l_res[i] == r_res[i]) { res[i] = l_res[i]; i++; }
    res[i] = '\0';
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