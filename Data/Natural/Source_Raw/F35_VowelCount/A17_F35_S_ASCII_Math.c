/**
 * LGL-DynT4 Dataset - Function: VowelCount
 * -----------------------------------------
 * File: A17_F35_S_ASCII_Math.c
 * Logic: Identify vowels via specific ASCII value math.
 */
#include <stdio.h>
#include <stdlib.h>

int VowelCount(const char* s) {
    int count = 0;
    while (*s) {
        int a = (unsigned char)*s;
        if (a == 97 || a == 101 || a == 105 || a == 111 || a == 117 ||
            a == 65 || a == 69 || a == 73 || a == 79 || a == 85) count++;
        s++;
    }
    return count;
}

int main(int argc, char* argv[]) {
    if (argc < 2) { printf("0\n"); return 0; }
    printf("%d\n", VowelCount(argv[1]));
    return 0;
}