/**
 * LGL-DynT4 Dataset - Function: LCP
 * -----------------------------------------
 * File: A11_F33_O_A05_Bitwise.c
 * Implementation Logic: Bitwise
 * Input Format: <str1> <str2> ...
 */
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

void LCP(char **strs, int n, char *res) {
    int off = 0;
    while (1) {
        char c = *(strs[0] + off);
        if (!(c ^ 0)) break;
        int i = 1, match = 1;
        while (i < n) {
            if (*(strs[i] + off) ^ c) { match = 0; break; }
            i++;
        }
        if (match) { *(res + off) = c; off++; } else break;
    }
    *(res + off) = '\0';
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