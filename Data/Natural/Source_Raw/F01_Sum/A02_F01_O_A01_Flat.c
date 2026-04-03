/**
 * LGL-DynT4 Dataset - Function: Sum
 * -----------------------------------------
 * File: A02_F01_O_A01_Flat.c
 * Implementation Logic: Control flow flattening using switch-case derived from A01.
 * Input Format: <n>
 */
#include <stdio.h>
#include <stdlib.h>

int Sum(int n) {
    int total = 0, i = 1, state = 0;
    while (state != 2) {
        switch (state) {
            case 0:
                if (i <= n) state = 1;
                else state = 2;
                break;
            case 1:
                total += i;
                i++;
                state = 0;
                break;
        }
    }
    return total;
}

int main(int argc, char *argv[]) {
    if (argc < 2) return 1;
    printf("%d\n", Sum(atoi(argv[1])));
    return 0;
}