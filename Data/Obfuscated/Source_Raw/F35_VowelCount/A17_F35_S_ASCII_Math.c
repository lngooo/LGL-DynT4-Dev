/**
 * LGL-DynT4 Dataset - Function: VowelCount
 * -----------------------------------------
 * File: A17_F35_S_ASCII_Math.c
 * Logic: Identify vowels via specific ASCII value math.
 */
#include <stdio.h>
#include <stdlib.h>

int pO(const char* dZ17) {
    int m = 0;
    while (*dZ17) {
        int r = (unsigned char)*dZ17;
        if (r == 97 || r == 101 || r == 105 || r == 111 || r == 117 ||
            r == 65 || r == 69 || r == 73 || r == 79 || r == 85) m++;
        dZ17++;
    }
    return m;
}

int main(int p7y, char* K[]) {
    if (p7y < 2) { printf("0\n"); return 0; }
    printf("%d\n", pO(K[1]));
    return 0;
}