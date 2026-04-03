/**
 * LGL-DynT4 Dataset - Function: Sum
 * -----------------------------------------
 * File: A03_F01_O_A01_Goto.c
 * Implementation Logic: Goto-based loop reconstruction to alter CFG structure.
 * Input Format: <n>
 */
#include <stdio.h>
#include <stdlib.h>

int Sum(int n) {
    int total = 0, i = 1;
loop_start:
    if (i > n) goto loop_end;
    total += i;
    i++;
    goto loop_start;
loop_end:
    return total;
}

int main(int argc, char *argv[]) {
    if (argc < 2) return 1;
    printf("%d\n", Sum(atoi(argv[1])));
    return 0;
}