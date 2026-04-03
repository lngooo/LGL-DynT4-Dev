/**
 * LGL-DynT4 Dataset - Function: VowelCount
 * -----------------------------------------
 * File: A13_F35_S_Vector_Like_Check.c
 * Logic: Check characters by matching against a small buffer.
 */
#include <stdio.h>
#include <stdlib.h>

int VowelCount(const char* s) {
    char v[] = {'a','e','i','o','u','A','E','I','O','U'};
    int res = 0;
    for (; *s; s++) {
        for (int i = 0; i < 10; i++) {
            if (*s == v[i]) { res++; break; }
        }
    }
    return res;
}

int main(int argc, char* argv[]) {
    if (argc < 2) { printf("0\n"); return 0; }
    printf("%d\n", VowelCount(argv[1]));
    return 0;
}