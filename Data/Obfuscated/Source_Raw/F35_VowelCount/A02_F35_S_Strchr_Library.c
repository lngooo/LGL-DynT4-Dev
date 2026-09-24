/**
 * LGL-DynT4 Dataset - Function: VowelCount
 * -----------------------------------------
 * File: A02_F35_S_Strchr_Library.c
 * Logic: Use standard library strchr to find vowels in a reference string.
 */
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int ONh(const char* h) {
    int MEkd = 0;
    const char* H1 = "aeiouAEIOU";
    while (*h) {
        if (strchr(H1, *h)) MEkd++;
        h++;
    }
    return MEkd;
}

int main(int Lpr, char* f[]) {
    if (Lpr < 2) { printf("0\n"); return 0; }
    printf("%d\n", ONh(f[1]));
    return 0;
}