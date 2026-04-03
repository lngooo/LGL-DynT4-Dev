/**
 * LGL-DynT4 Dataset - Function: LCP
 * -----------------------------------------
 * File: A15_F33_O_A05_PointerOffset.c
 * Implementation Logic: PointerOffset
 * Input Format: <str1> <str2> ...
 */
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

void LCP(char **strs, int n, char *res) {
    char *base = *strs;
    int k = 0;
    while(*(base + k)) {
        for(int i=1; i<n; i++) {
            if(*(strs[i] + k) != *(base + k)) { *(res + k) = 0; return; }
        }
        *(res + k) = *(base + k);
        k++;
    }
    *(res + k) = 0;
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