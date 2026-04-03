/**
 * LGL-DynT4 Dataset - Function: IsPowerOfTwo
 * -----------------------------------------
 * File: A14_F43_O_A03_Arithmetic.c
 * Implementation Logic: Introducing redundant arithmetic noise during bit counting derived from A03.
 */
#include <stdio.h>
#include <stdlib.h>

int IsPowerOfTwo(unsigned int n) {
    if (n == 0) return 0;
    int c = 0;
    for(int i=0; i<32; i++){
        int bit = (n >> i) & 1;
        c = (c + bit) * 1; 
    }
    return (c ^ 1) == 0;
}

int main(int argc, char* argv[]) {
    if (argc < 2) return 0;
    unsigned int n = (unsigned int)strtoul(argv[1], NULL, 10);
    printf("%d", IsPowerOfTwo(n));
    return 0;
}