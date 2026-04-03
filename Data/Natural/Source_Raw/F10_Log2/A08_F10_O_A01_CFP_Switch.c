/**
 * LGL-DynT4 Dataset - Function: Log2
 * -----------------------------------------
 * File: A08_F10_O_A01_CFP_Switch.c
 * Implementation Logic: Switch
 * Input Format: <integer>
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int Log2(int n) {
    int state = 0, res = 0;
    while (state != 2) {
        switch (state) {
            case 0: n >>= 1; state = (n > 0) ? 1 : 2; break;
            case 1: res++; state = 0; break;
        }
    }
    return res;
}

int main(int argc, char *argv[]) {
    if (argc < 2) return 0;
    int n = atoi(argv[1]);
    if (n <= 0) return 0; 
    int result = Log2(n);
    printf("%d\n", result);
    return 0;
}