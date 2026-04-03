/**
 * LGL-DynT4 Dataset - Function: Log2
 * -----------------------------------------
 * File: A18_F10_O_A06_JumpTable.c
 * Implementation Logic: JumpTable
 * Input Format: <integer>
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int Log2(int n) {
    int c = -1;
    unsigned int limit = (unsigned int)n;
    unsigned int cur = 1;
loop_start:
    if (cur > limit) return c;
    cur *= 2;
    c++;
    if (cur == 0) return c;
    goto loop_start;
}

int main(int argc, char *argv[]) {
    if (argc < 2) return 0;
    int n = atoi(argv[1]);
    if (n <= 0) return 0; 
    int result = Log2(n);
    printf("%d\n", result);
    return 0;
}