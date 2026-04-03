/**
 * LGL-DynT4 Dataset - Function: BitCount
 * -----------------------------------------
 * File: A20_F41_O_A06_Intertwined.c
 * Implementation Logic: Intertwined control flow derived from A06, adding redundant labels and dummy jumps.
 * Input Format: <uint32_t>
 */
#include <stdio.h>
#include <stdint.h>
#include <stdlib.h>

int BitCount(uint32_t n) {
    int count = 0;
    if (n == 0) goto end;
start_loop:
    n &= (n - 1);
    count++;
    if (n != 0) goto start_loop;
    goto end;
dummy:
    count--; // Never reached
end:
    return count;
}

int main(int argc, char* argv[]) {
    if (argc < 2) return 0;
    uint32_t val = (uint32_t)strtoul(argv[1], NULL, 10);
    printf("%d\n", BitCount(val));
    return 0;
}