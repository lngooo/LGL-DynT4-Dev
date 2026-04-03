/**
 * LGL-DynT4 Dataset - Function: Sqrt
 * -----------------------------------------
 * File: A20_F05_O_A10_SwitchLoop.c
 * Implementation Logic: Brute force re-structured into a switch-driven state loop.
 * Input Format: <n>
 */
#include <stdio.h>
#include <stdlib.h>

int Sqrt(int n) {
    if (n < 0) return -1;
    long i = 0;
    int s = 0;
    while (s != 1) {
        switch (s) {
            case 0: 
                if ((i + 1) * (i + 1) <= n) i++;
                else s = 1;
                break;
        }
    }
    return (int)i;
}

int main(int argc, char *argv[]) {
    if (argc < 2) return 1;
    printf("%d\n", Sqrt(atoi(argv[1])));
    return 0;
}