/**
 * LGL-DynT4 Dataset - Function: Factorial
 * -----------------------------------------
 * File: A21_F03_O_A20_JumpTable.c
 * Implementation Logic: Function pointer jump table to handle recursion states.
 * Input Format: <n>
 */
#include <stdio.h>
#include <stdlib.h>

long long Factorial(int n) {
    if (n < 0) return 0;
    if (n == 0) return 1;
    long long res = 1;
    void *labels[] = {&&loop, &&exit};
loop:
    if (n > 0) {
        res *= n--;
        goto *labels[0];
    }
    goto *labels[1];
exit:
    return res;
}

int main(int argc, char *argv[]) {
    if (argc < 2) return 1;
    printf("%lld\n", Factorial(atoi(argv[1])));
    return 0;
}