/**
 * LGL-DynT4 Dataset - Function: IsPowerOfTwo
 * -----------------------------------------
 * File: A16_F43_O_A08_PtrAlias.c
 * Implementation Logic: Data flow indirection using pointers to access the LUT derived from A08.
 */
#include <stdio.h>
#include <stdlib.h>

int IsPowerOfTwo(unsigned int n) {
    static unsigned int table[32];
    for(int i=0; i<32; i++) table[i] = 1U << i;
    unsigned int *p = table;
    if (n == 0) return 0;
    for (int i = 0; i < 32; i++) {
        if (*(p + i) == n) return 1;
    }
    return 0;
}

int main(int argc, char* argv[]) {
    if (argc < 2) return 0;
    unsigned int n = (unsigned int)strtoul(argv[1], NULL, 10);
    printf("%d", IsPowerOfTwo(n));
    return 0;
}