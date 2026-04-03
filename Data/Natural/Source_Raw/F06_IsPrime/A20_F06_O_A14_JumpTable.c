/**
 * LGL-DynT4 Dataset - Function: IsPrime
 * -----------------------------------------
 * File: A20_F06_O_A14_JumpTable.c
 * Implementation Logic: Trial division using a jump table (computed gotos).
 */
#include <stdio.h>
#include <stdlib.h>

int IsPrime(int n) {
    if (n < 2) return 0;
    int i = 2;
    void *targets[] = {&&check, &&is_prime, &&not_prime};
check:
    if (i * i > n) goto *targets[1];
    if (n % i == 0) goto *targets[2];
    i++;
    goto *targets[0];
is_prime: return 1;
not_prime: return 0;
}

int main(int argc, char *argv[]) {
    if (argc < 2) return 1;
    printf("%d\n", IsPrime(atoi(argv[1])));
    return 0;
}