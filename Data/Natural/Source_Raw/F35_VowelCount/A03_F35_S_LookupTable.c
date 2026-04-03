/**
 * LGL-DynT4 Dataset - Function: VowelCount
 * -----------------------------------------
 * File: A03_F35_S_LookupTable.c
 * Logic: Use a 256-byte static array as a lookup table for O(1) character check.
 */
#include <stdio.h>
#include <stdlib.h>

int VowelCount(const char* s) {
    static int table[256] = {0};
    table['a'] = table['e'] = table['i'] = table['o'] = table['u'] = 1;
    table['A'] = table['E'] = table['I'] = table['O'] = table['U'] = 1;
    int count = 0;
    for (; *s; s++) {
        if (table[(unsigned char)*s]) count++;
    }
    return count;
}

int main(int argc, char* argv[]) {
    if (argc < 2) { printf("0\n"); return 0; }
    printf("%d\n", VowelCount(argv[1]));
    return 0;
}