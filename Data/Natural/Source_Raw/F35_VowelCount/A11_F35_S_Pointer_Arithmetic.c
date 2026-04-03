/**
 * LGL-DynT4 Dataset - Function: VowelCount
 * -----------------------------------------
 * File: A11_F35_S_Pointer_Arithmetic.c
 * Logic: Iterate using pointer arithmetic instead of array indexing.
 */
#include <stdio.h>
#include <stdlib.h>

int VowelCount(const char* s) {
    int n = 0;
    const char* p = s;
    while (*p) {
        char t = *p;
        if (t == 97 || t == 101 || t == 105 || t == 111 || t == 117 ||
            t == 65 || t == 69 || t == 73 || t == 79 || t == 85) n++;
        p++;
    }
    return n;
}

int main(int argc, char* argv[]) {
    if (argc < 2) { printf("0\n"); return 0; }
    printf("%d\n", VowelCount(argv[1]));
    return 0;
}