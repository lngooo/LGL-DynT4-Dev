/**
 * LGL-DynT4 Dataset - Function: IsPrime
 * -----------------------------------------
 * File: A11_F06_O_A10_Unroll.c
 * Implementation Logic: 6k method with loop unrolling and split variables.
 */
#include <stdio.h>
#include <stdlib.h>

int IsPrime(int n) {
    if (n < 4) return n > 1;
    if (!(n % 2) || !(n % 3)) return 0;
    for (int i = 5; ; i += 12) {
        if (i * i > n) break;
        if (n % i == 0 || n % (i + 2) == 0) return 0;
        int next = i + 6;
        if (next * next > n) break;
        if (n % next == 0 || n % (next + 2) == 0) return 0;
    }
    return 1;
}

int main(int argc, char *argv[]) {
    if (argc < 2) return 1;
    printf("%d\n", IsPrime(atoi(argv[1])));
    return 0;
}