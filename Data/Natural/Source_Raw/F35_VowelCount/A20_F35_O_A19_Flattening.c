/**
 * LGL-DynT4 Dataset - Function: VowelCount
 * -----------------------------------------
 * File: A20_F35_O_A19_Flattening.c
 * Logic: Ternary chain logic with control flow flattening.
 */
#include <stdio.h>
#include <stdlib.h>

int VowelCount(const char* s) {
    int count = 0, st = 1;
    while (st) {
        if (*s == 0) { st = 0; }
        else {
            char c = *s;
            int inc = (c=='a'||c=='e'||c=='i'||c=='o'||c=='u'||
                       c=='A'||c=='E'||c=='I'||c=='O'||c=='U') ? 1 : 0;
            count += inc;
            s++;
        }
    }
    return count;
}

int main(int argc, char* argv[]) {
    if (argc < 2) { printf("0\n"); return 0; }
    printf("%d\n", VowelCount(argv[1]));
    return 0;
}