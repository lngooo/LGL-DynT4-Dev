/**
 * LGL-DynT4 Dataset - Function: IsPrime
 * -----------------------------------------
 * File: A19_F06_O_A01_SwitchLoop.c
 * Implementation Logic: Loop re-structured into a single switch-case within a while.
 */
#include <stdio.h>
#include <stdlib.h>

int IsPrime(int n) {
    if (n < 2) return 0;
    int i = 2;
    while (1) {
        if (i * i > n) return 1;
        switch (n % i) {
            case 0: return 0;
            default: i++; break;
        }
    }
}

int main(int argc, char *argv[]) {
    if (argc < 2) return 1;
    printf("%d\n", IsPrime(atoi(argv[1])));
    return 0;
}