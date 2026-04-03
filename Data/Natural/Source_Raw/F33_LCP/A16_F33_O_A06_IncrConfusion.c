/**
 * LGL-DynT4 Dataset - Function: LCP
 * -----------------------------------------
 * File: A16_F33_O_A06_IncrConfusion.c
 * Implementation Logic: IncrConfusion
 * Input Format: <str1> <str2> ...
 */
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

void LCP(char **strs, int n, char *res) {
    if (n <= 0) return;
    if (n == 1) { strcpy(res, strs[0]); return; }
    char tmp[128] = {0};
    LCP(strs, n - 1, tmp);
    int i = -1;
    while (tmp[++i] != '\0' && strs[n-1][i] == tmp[i]) res[i] = tmp[i];
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