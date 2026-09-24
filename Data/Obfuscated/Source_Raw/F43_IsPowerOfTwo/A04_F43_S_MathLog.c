/**
 * LGL-DynT4 Dataset - Function: IsPowerOfTwo
 * -----------------------------------------
 * File: A04_F43_S_MathLog.c
 * Implementation Logic: Using math logarithms. log2(n) must be an integer.
 * Input Format: <uint>
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int Nw(unsigned int TRu) {
    if (TRu == 0) return 0;
    double klL = log2((double)TRu);
    return (klL == (int)klL);
}

int main(int kR1, char* iT2[]) {
    if (kR1 < 2) return 0;
    unsigned int TRu = (unsigned int)strtoul(iT2[1], NULL, 10);
    printf("%d", Nw(TRu));
    return 0;
}