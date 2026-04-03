/**
 * LGL-DynT4 Dataset - Function: GrayCode
 * -----------------------------------------
 * File: A10_F45_O_A07_Goto.c
 * Implementation Logic: Goto-based loop reconstruction derived from A07 to alter CFG.
 */
#include <stdio.h>
#include <stdlib.h>

unsigned int GrayCode(unsigned int n) {
    unsigned int result = 0;
    int i = 0;
loop_start:
    if (i >= 32) goto loop_end;
    if (((n >> i) & 1) != ((n >> (i+1)) & 1)) result |= (1U << i);
    i++;
    goto loop_start;
loop_end:
    return result;
}

int main(int argc, char* argv[]) {
    if (argc < 2) return 0;
    unsigned int n = (unsigned int)strtoul(argv[1], NULL, 10);
    printf("%u", GrayCode(n));
    return 0;
}