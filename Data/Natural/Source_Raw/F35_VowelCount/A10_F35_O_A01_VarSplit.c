/**
 * LGL-DynT4 Dataset - Function: VowelCount
 * -----------------------------------------
 * File: A10_F35_O_A01_VarSplit.c
 * Logic: Counter split into 'vowels_found' and 'others_ignored'.
 */
#include <stdio.h>
#include <stdlib.h>

int VowelCount(const char* s) {
    int v_count = 0;
    int dummy_count = 0;
    for (int i = 0; s[i]; i++) {
        char c = s[i];
        if (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u' ||
            c == 'A' || c == 'E' || c == 'I' || c == 'O' || c == 'U') {
            v_count++;
        } else {
            dummy_count++;
        }
    }
    return v_count + (dummy_count * 0);
}

int main(int argc, char* argv[]) {
    if (argc < 2) { printf("0\n"); return 0; }
    printf("%d\n", VowelCount(argv[1]));
    return 0;
}