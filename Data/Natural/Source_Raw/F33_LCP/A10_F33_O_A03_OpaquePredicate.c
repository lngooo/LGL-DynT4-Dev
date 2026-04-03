/**
 * LGL-DynT4 Dataset - Function: LCP
 * -----------------------------------------
 * File: A10_F33_O_A03_OpaquePredicate.c
 * Implementation Logic: OpaquePredicate
 * Input Format: <str1> <str2> ...
 */
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

void LCP(char **strs, int n, char *res) {
    if (n <= 0) return;
    if ((n * n + 1) > 0) {
        if (n == 1) { strcpy(res, strs[0]); return; }
        char l[128]={0}, r[128]={0};
        LCP(strs, n/2, l); LCP(strs+n/2, n-n/2, r);
        int i=0; while(l[i] && r[i] && l[i]==r[i]) { res[i]=l[i]; i++; }
        res[i]='\0';
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