/**
 * LGL-DynT4 Dataset - Function: VowelCount
 * -----------------------------------------
 * File: A02_F35_S_Strchr_Library.c
 * Logic: Use standard library strchr to find vowels in a reference string.
 */
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int VowelCount(const char* s) {
    int count = 0;
    const char* vowels = "aeiouAEIOU";
    while (*s) {
        if (strchr(vowels, *s)) count++;
        s++;
    }
    return count;
}

int main(int argc, char* argv[]) {
    if (argc < 2) { printf("0\n"); return 0; }
    printf("%d\n", VowelCount(argv[1]));
    return 0;
}