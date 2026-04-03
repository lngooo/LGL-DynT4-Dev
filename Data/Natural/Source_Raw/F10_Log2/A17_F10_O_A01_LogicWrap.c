/**
 * LGL-DynT4 Dataset - Function: Log2
 * -----------------------------------------
 * File: A17_F10_O_A01_LogicWrap.c
 * Implementation Logic: LogicWrap
 * Input Format: <integer>
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int Log2(int n) {
    int count = 0;
    for (; n > 1; n >>= 1) {
        int dummy = 0;
        for(int i=0; i<1; i++) dummy++;
        count += dummy;
    }
    return count;
}

int main(int argc, char *argv[]) {
    if (argc < 2) return 0;
    int n = atoi(argv[1]);
    if (n <= 0) return 0; 
    int result = Log2(n);
    printf("%d\n", result);
    return 0;
}