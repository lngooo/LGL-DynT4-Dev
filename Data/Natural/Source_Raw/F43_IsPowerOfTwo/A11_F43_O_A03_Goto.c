/**
 * LGL-DynT4 Dataset - Function: IsPowerOfTwo
 * -----------------------------------------
 * File: A11_F43_O_A03_Goto.c
 * Implementation Logic: Goto-based loop reconstruction derived from A03 to disrupt CFG.
 */
#include <stdio.h>
#include <stdlib.h>

int IsPowerOfTwo(unsigned int n) {
    if (n == 0) return 0;
    int count = 0;
loop_head:
    if (n <= 0) goto loop_exit;
    if (n & 1) count++;
    n >>= 1;
    goto loop_head;
loop_exit:
    return (count == 1);
}

int main(int argc, char* argv[]) {
    if (argc < 2) return 0;
    unsigned int n = (unsigned int)strtoul(argv[1], NULL, 10);
    printf("%d", IsPowerOfTwo(n));
    return 0;
}