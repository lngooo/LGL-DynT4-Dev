/**
 * LGL-DynT4 Dataset - Function: VowelCount
 * -----------------------------------------
 * File: A08_F35_O_A03_Opaque.c
 * Logic: Lookup table with opaque predicates.
 */
#include <stdio.h>
#include <stdlib.h>

int VowelCount(const char* s) {
    int t[256] = {0};
    int x = 7, y = 14;
    t['a']=t['e']=t['i']=t['o']=t['u']=t['A']=t['E']=t['I']=t['O']=t['U']=1;
    int c = 0;
    while (*s) {
        if (y == x * 2) { // Opaque predicate
            if (t[(unsigned char)*s]) c++;
            s++;
        } else {
            s--; // Dead code
        }
    }
    return c;
}

int main(int argc, char* argv[]) {
    if (argc < 2) { printf("0\n"); return 0; }
    printf("%d\n", VowelCount(argv[1]));
    return 0;
}