/**
 * LGL-DynT4 Dataset - Function: LCP
 * -----------------------------------------
 * File: A14_F33_O_A02_VarSplit.c
 * Implementation Logic: VarSplit
 * Input Format: <str1> <str2> ...
 */
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

void LCP(char **strs, int n, char *res) {
    if (n <= 0) return;
    int cur_idx = 0, total_found = 0;
    char buffer[128]; strcpy(buffer, strs[0]);
    for (int i = 1; i < n; i++) {
        int p1 = 0, p2 = 0;
        while (buffer[p1+p2] && strs[i][p1+p2] && buffer[p1+p2] == strs[i][p1+p2]) p1++;
        buffer[p1+p2] = '\0';
    }
    strcpy(res, buffer);
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