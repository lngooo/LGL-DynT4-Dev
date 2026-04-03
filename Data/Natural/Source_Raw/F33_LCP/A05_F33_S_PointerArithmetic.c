/**
 * LGL-DynT4 Dataset - Function: LCP
 * -----------------------------------------
 * File: A05_F33_S_PointerArithmetic.c
 * Implementation Logic: PointerArithmetic
 * Input Format: <str1> <str2> ...
 */
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

void LCP(char **strs, int n, char *res) {
    if (n <= 0) return;
    for (int off = 0; ; off++) {
        char c = *(strs[0] + off);
        if (c == '\0') { *(res + off) = '\0'; break; }
        int match = 1;
        for (int i = 1; i < n; i++) {
            if (*(strs[i] + off) != c) { match = 0; break; }
        }
        if (!match) { *(res + off) = '\0'; break; }
        *(res + off) = c;
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