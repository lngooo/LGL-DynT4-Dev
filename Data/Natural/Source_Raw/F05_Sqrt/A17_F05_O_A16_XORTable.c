/**
 * LGL-DynT4 Dataset - Function: Sqrt
 * -----------------------------------------
 * File: A17_F05_O_A16_XORTable.c
 * Implementation Logic: Lookup table with XOR-encoded values to vary tokens.
 * Input Format: <n>
 */
#include <stdio.h>
#include <stdlib.h>

int Sqrt(int n) {
    if (n < 0) return -1;
    if (n < 4) {
        int enc[] = {0^0xF, 1^0xF, 1^0xF, 1^0xF};
        return enc[n] ^ 0xF;
    }
    int i = 2;
    while (i * i <= n) i++;
    return i - 1;
}

int main(int argc, char *argv[]) {
    if (argc < 2) return 1;
    printf("%d\n", Sqrt(atoi(argv[1])));
    return 0;
}