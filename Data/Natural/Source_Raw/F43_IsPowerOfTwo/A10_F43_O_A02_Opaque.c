/**
 * LGL-DynT4 Dataset - Function: IsPowerOfTwo
 * -----------------------------------------
 * File: A10_F43_O_A02_Opaque.c
 * Implementation Logic: Opaque predicates derived from A02 to add fake branches.
 */
#include <stdio.h>
#include <stdlib.h>

int IsPowerOfTwo(unsigned int n) {
    if (n == 0) return 0;
    int dummy = 10;
    while (n % 2 == 0) {
        if ((dummy * dummy) % 2 == 1) { // Opaque: always false
            n += 777;
        }
        n /= 2;
    }
    return (n == 1);
}

int main(int argc, char* argv[]) {
    if (argc < 2) return 0;
    unsigned int n = (unsigned int)strtoul(argv[1], NULL, 10);
    printf("%d", IsPowerOfTwo(n));
    return 0;
}