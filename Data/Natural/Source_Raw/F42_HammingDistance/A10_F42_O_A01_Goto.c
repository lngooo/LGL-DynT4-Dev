/**
 * LGL-DynT4 Dataset - Function: HammingDistance
 * -----------------------------------------
 * File: A10_F42_O_A01_Goto.c
 * Implementation Logic: Loop reconstruction using goto labels to disrupt structured control flow derived from A01.
 * Input Format: <uint1> <uint2>
 */
#include <stdio.h>
#include <stdlib.h>

int HammingDistance(unsigned int x, unsigned int y) {
    unsigned int diff = x ^ y;
    int dist = 0;
start:
    if (diff == 0) goto end;
    if (diff & 1) goto inc;
shift:
    diff >>= 1;
    goto start;
inc:
    dist++;
    goto shift;
end:
    return dist;
}

int main(int argc, char* argv[]) {
    if (argc < 3) return 0;
    unsigned int a = (unsigned int)strtoul(argv[1], NULL, 10);
    unsigned int b = (unsigned int)strtoul(argv[2], NULL, 10);
    printf("%d", HammingDistance(a, b));
    return 0;
}