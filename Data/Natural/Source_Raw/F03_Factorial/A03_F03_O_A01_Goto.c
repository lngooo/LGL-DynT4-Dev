/**
 * LGL-DynT4 Dataset - Function: Factorial
 * -----------------------------------------
 * File: A03_F03_O_A01_Goto.c
 * Implementation Logic: Iterative logic reconstructed using goto labels to disrupt CFG.
 * Input Format: <n>
 */
#include <stdio.h>
#include <stdlib.h>

long long Factorial(int n) {
    if (n < 0) return 0;
    long long res = 1;
    int i = 1;
loop:
    if (i > n) goto end;
    res *= i;
    i++;
    goto loop;
end:
    return res;
}

int main(int argc, char *argv[]) {
    if (argc < 2) return 1;
    printf("%lld\n", Factorial(atoi(argv[1])));
    return 0;
}