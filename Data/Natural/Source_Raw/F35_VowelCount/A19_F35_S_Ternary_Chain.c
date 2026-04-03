/**
 * LGL-DynT4 Dataset - Function: VowelCount
 * -----------------------------------------
 * File: A19_F35_S_Ternary_Chain.c
 * Logic: Use a chain of ternary operators to determine increment.
 */
#include <stdio.h>
#include <stdlib.h>

int VowelCount(const char* s) {
    int count = 0;
    for (; *s; s++) {
        char c = *s;
        count += (c=='a'?1:(c=='e'?1:(c=='i'?1:(c=='o'?1:(c=='u'?1:
                 (c=='A'?1:(c=='E'?1:(c=='I'?1:(c=='O'?1:(c=='U'?1:0))))))))));
    }
    return count;
}

int main(int argc, char* argv[]) {
    if (argc < 2) { printf("0\n"); return 0; }
    printf("%d\n", VowelCount(argv[1]));
    return 0;
}