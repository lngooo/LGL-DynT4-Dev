/**
 * LGL-DynT4 Dataset - Function: IsPrime
 * -----------------------------------------
 * File: A03_F06_O_A01_Goto.c
 * Implementation Logic: Logic re-mapped using goto to break structural analysis.
 */
#include <stdio.h>
#include <stdlib.h>

int IsPrime(int n) {
    if (n < 2) goto false_label;
    if (n < 4) goto true_label;
    if (n % 2 == 0) goto false_label;
    int i = 3;
loop:
    if (i * i > n) goto true_label;
    if (n % i == 0) goto false_label;
    i += 2;
    goto loop;
true_label: return 1;
false_label: return 0;
}

int main(int argc, char *argv[]) {
    if (argc < 2) return 1;
    printf("%d\n", IsPrime(atoi(argv[1])));
    return 0;
}