/**
 * LGL-DynT4 Dataset - Function: Power
 * -----------------------------------------
 * File: A12_F07_O_A01_VariableSplit.c
 * Implementation Logic: Splitting 'res' into two variables res_a and res_b.
 */
#include <stdio.h>
#include <stdlib.h>

int Power(int base, int exp) {
    int res_a = 1, res_b = 0;
    for (int i = 0; i < exp; i++) {
        res_a = res_a * base;
        res_b += 0; 
    }
    return res_a + res_b;
}

int main(int argc, char *argv[]) {
    if (argc < 3) return 1;
    printf("%d\n", Power(atoi(argv[1]), atoi(argv[2])));
    return 0;
}