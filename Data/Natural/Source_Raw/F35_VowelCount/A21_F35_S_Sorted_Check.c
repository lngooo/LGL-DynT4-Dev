/**
 * LGL-DynT4 Dataset - Function: VowelCount
 * -----------------------------------------
 * File: A21_F35_S_Sorted_Check.c
 * Logic: Check character against a sorted list using a small range check.
 */
#include <stdio.h>
#include <stdlib.h>

int VowelCount(const char* s) {
    int total = 0;
    while (*s) {
        char c = *s;
        if ((c >= 65 && c <= 117)) { // Range between 'A' and 'u'
            if (c=='a'||c=='e'||c=='i'||c=='o'||c=='u'||c=='A'||c=='E'||c=='I'||c=='O'||c=='U')
                total++;
        }
        s++;
    }
    return total;
}

int main(int argc, char* argv[]) {
    if (argc < 2) { printf("0\n"); return 0; }
    printf("%d\n", VowelCount(argv[1]));
    return 0;
}