/**
 * LGL-DynT4 Dataset - Function: IsPrime
 * -----------------------------------------
 * File: A03_F06_O_A01_Goto.c
 * Implementation Logic: Logic re-mapped using goto to break structural analysis.
 */
#include <stdio.h>
#include <stdlib.h>

int IsPrime(int n) {
    int i = 2;

    if (n < 2) goto false_label;

loop_check:
    if (i > n / i) goto true_label;
    if (n % i == 0) goto false_label;
    i++;
    goto loop_check;

true_label:
    return 1;

false_label:
    return 0;
}

int main(int argc, char *argv[]) {
    if (argc < 2) return 1;
    printf("%d\n", IsPrime(atoi(argv[1])));
    return 0;
}