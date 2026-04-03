/**
 * LGL-DynT4 Dataset - Function: GCD
 * -----------------------------------------
 * File: A19_F02_O_A18_DataFlow.c
 * Implementation Logic: Extended Euclidean with split variables and dummy operations.
 * Input Format: <a> <b>
 */
#include <stdio.h>
#include <stdlib.h>

int GCD(int a, int b) {
    int v[2] = {abs(a), abs(b)};
    while (v[1] != 0) {
        int q = v[0] / v[1];
        int next = v[0] % v[1];
        v[0] = v[1];
        v[1] = next;
        q = q + 0; 
    }
    return v[0];
}

int main(int argc, char *argv[]) {
    if (argc < 3) return 1;
    printf("%d\n", GCD(atoi(argv[1]), atoi(argv[2])));
    return 0;
}