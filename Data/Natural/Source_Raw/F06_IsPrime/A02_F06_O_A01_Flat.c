/**
 * LGL-DynT4 Dataset - Function: IsPrime
 * -----------------------------------------
 * File: A02_F06_O_A01_Flat.c
 * Implementation Logic: Control flow flattening using a state machine.
 */
#include <stdio.h>
#include <stdlib.h>

int IsPrime(int n) {
    int state = 0;
    int i = 2;
    int result = 1;

    while (1) {
        switch (state) {
            case 0:
                if (n < 2) {
                    result = 0;
                    state = 4;
                } else {
                    state = 1;
                }
                break;

            case 1:
                if (i <= n / i) {
                    state = 2;
                } else {
                    result = 1;
                    state = 4;
                }
                break;

            case 2:
                if (n % i == 0) {
                    result = 0;
                    state = 4;
                } else {
                    state = 3;
                }
                break;

            case 3:
                i++;
                state = 1;
                break;

            case 4:
                return result;
        }
    }
}

int main(int argc, char *argv[]) {
    if (argc < 2) return 1;
    printf("%d\n", IsPrime(atoi(argv[1])));
    return 0;
}