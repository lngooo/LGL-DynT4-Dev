/**
 * LGL-DynT4 Dataset - Function: LCP
 * -----------------------------------------
 * File: A18_F33_O_A03_JumpTable.c
 * Implementation Logic: JumpTable
 * Input Format: <str1> <str2> ...
 */
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

void LCP(char **strs, int n, char *res) {
    if (n <= 1) { if(n==1) strcpy(res, strs[0]); return; }
    char b1[128]={0}, b2[128]={0};
    LCP(strs, n/2, b1); LCP(strs + n/2, n - n/2, b2);
    int i = 0;
loop_j:
    if (b1[i] && b1[i] == b2[i]) { res[i] = b1[i]; i++; goto loop_j; }
    res[i] = 0;
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