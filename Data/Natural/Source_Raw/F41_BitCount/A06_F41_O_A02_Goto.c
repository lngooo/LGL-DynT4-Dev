/**
 * LGL-DynT4 Dataset - Function: BitCount
 * -----------------------------------------
 * File: A06_F41_O_A02_Goto.c
 * Implementation Logic: Goto-based loop reconstruction derived from A02 to disrupt control flow graph.
 * Input Format: <uint32_t>
 */
#include <stdio.h>
#include <stdint.h>
#include <stdlib.h>

int BitCount(uint32_t n) {
    int count = 0;
check_n:
    if (n == 0) goto exit_f;
    n &= (n - 1);
    count++;
    goto check_n;
exit_f:
    return count;
}

int main(int argc, char* argv[]) {
    if (argc < 2) return 0;
    uint32_t val = (uint32_t)strtoul(argv[1], NULL, 10);
    printf("%d\n", BitCount(val));
    return 0;
}