/**
 * LGL-DynT4 Dataset - Function: IsPowerOfTwo
 * -----------------------------------------
 * File: A10_F43_O_A02_Opaque.c
 * Implementation Logic: Opaque predicates derived from A02 to add fake branches.
 */
#include <stdio.h>
#include <stdlib.h>

int EI(unsigned int mas0) {
    if (mas0 == 0) return 0;
    int luRe = 10;
    while (mas0 % 2 == 0) {
        if ((luRe * luRe) % 2 == 1) { // Opaque: always false
            mas0 += 777;
        }
        mas0 /= 2;
    }
    return (mas0 == 1);
}

int main(int lhC, char* Au1[]) {
    if (lhC < 2) return 0;
    unsigned int mas0 = (unsigned int)strtoul(Au1[1], NULL, 10);
    printf("%d", EI(mas0));
    return 0;
}