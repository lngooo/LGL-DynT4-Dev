/**
 * LGL-DynT4 Dataset - Function: ByteSwap
 * -----------------------------------------
 * File: A06_F44_O_A03_Goto.c
 * Implementation Logic: Goto-based loop reconstruction derived from A03 to disrupt CFG structure.
 * Input Format: <uint32_t>
 */
#include <stdio.h>
#include <stdint.h>
#include <stdlib.h>

uint32_t ByteSwap(uint32_t x) {
    uint32_t res;
    uint8_t *s = (uint8_t *)&x;
    uint8_t *d = (uint8_t *)&res;
    int i = 0;
loop_head:
    if (i >= 4) goto loop_exit;
    d[i] = s[3 - i];
    i++;
    goto loop_head;
loop_exit:
    return res;
}

int main(int argc, char* argv[]) {
    if (argc < 2) return 0;
    uint32_t val = (uint32_t)strtoul(argv[1], NULL, 10);
    printf("%u\n", ByteSwap(val));
    return 0;
}