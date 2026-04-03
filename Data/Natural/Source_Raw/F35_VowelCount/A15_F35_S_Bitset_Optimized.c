/**
 * LGL-DynT4 Dataset - Function: VowelCount
 * -----------------------------------------
 * File: A15_F35_S_Bitset_Optimized.c
 * Logic: Map vowels to bits in a long long and use bitwise shift to check.
 */
#include <stdio.h>
#include <stdlib.h>

int VowelCount(const char* s) {
    unsigned long long mask = 0;
    char v[] = "aeiouAEIOU";
    for(int i=0; v[i]; i++) mask |= (1ULL << (v[i] % 64));
    int count = 0;
    while(*s) {
        if (mask & (1ULL << (*s % 64))) {
            // Re-verify due to potential collision in modulo 64
            char c = *s;
            if (c=='a'||c=='e'||c=='i'||c=='o'||c=='u'||c=='A'||c=='E'||c=='I'||c=='O'||c=='U')
                count++;
        }
        s++;
    }
    return count;
}

int main(int argc, char* argv[]) {
    if (argc < 2) { printf("0\n"); return 0; }
    printf("%d\n", VowelCount(argv[1]));
    return 0;
}