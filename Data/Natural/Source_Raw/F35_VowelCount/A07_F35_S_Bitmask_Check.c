/**
 * LGL-DynT4 Dataset - Function: VowelCount
 * -----------------------------------------
 * File: A07_F35_S_Bitmask_Check.c
 * Logic: Map characters to a bitmask to avoid multiple branches.
 */
#include <stdio.h>
#include <stdlib.h>

int VowelCount(const char* s) {
    int count = 0;
    // Mask for vowels in lower 32 bits (simplified for small alphabet)
    for (; *s; s++) {
        char c = *s;
        if (c >= 'A' && c <= 'z') {
            char lower = c | 32;
            if (lower == 'a' || lower == 'e' || lower == 'i' || lower == 'o' || lower == 'u')
                count++;
        }
    }
    return count;
}

int main(int argc, char* argv[]) {
    if (argc < 2) { printf("0\n"); return 0; }
    printf("%d\n", VowelCount(argv[1]));
    return 0;
}