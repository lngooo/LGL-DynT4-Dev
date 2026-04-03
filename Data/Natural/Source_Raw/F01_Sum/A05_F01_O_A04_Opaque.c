/**
 * LGL-DynT4 Dataset - Function: Sum
 * -----------------------------------------
 * File: A05_F01_O_A04_Opaque.c
 * Implementation Logic: Recursive with opaque predicates (if(1==1)) to confuse CFG.
 * Input Format: <n>
 */
#include <stdio.h>
#include <stdlib.h>

int Sum(int n) {
    if (n <= 0) {
        if ((n * n) >= 0) return 0;
        else return -1;
    }
    return n + Sum(n - 1);
}

int main(int argc, char *argv[]) {
    if (argc < 2) return 1;
    printf("%d\n", Sum(atoi(argv[1])));
    return 0;
}