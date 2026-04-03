/**
 * LGL-DynT4 Dataset - Function: NewtonRoot
 * -----------------------------------------
 * File: A21_F09_O_A12_Struct.c
 * Implementation Logic: Newton method with data encapsulated in structs.
 */
#include <stdio.h>
#include <stdlib.h>

struct NR { long val; long target; };

int NewtonRoot(int n) {
    if (n < 0) return -1;
    struct NR data = { (long)n, (long)n };
    if (n >= 2) {
        long nxt = (data.val + data.target / data.val) >> 1;
        while (nxt < data.val) {
            data.val = nxt;
            nxt = (data.val + data.target / data.val) >> 1;
        }
    }
    return (int)data.val;
}

int main(int argc, char *argv[]) {
    if (argc < 2) return 1;
    printf("%d\n", NewtonRoot(atoi(argv[1])));
    return 0;
}