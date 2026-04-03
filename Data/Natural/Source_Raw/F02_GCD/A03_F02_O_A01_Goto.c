/**
 * LGL-DynT4 Dataset - Function: GCD
 * -----------------------------------------
 * File: A03_F02_O_A01_Goto.c
 * Implementation Logic: Euclidean algorithm reconstructed using goto labels to disrupt CFG.
 * Input Format: <a> <b>
 */
#include <stdio.h>
#include <stdlib.h>

int GCD(int a, int b) {
    a = abs(a); b = abs(b);
loop:
    if (b == 0) goto end;
    int t = b;
    b = a % b;
    a = t;
    goto loop;
end:
    return a;
}

int main(int argc, char *argv[]) {
    if (argc < 3) return 1;
    printf("%d\n", GCD(atoi(argv[1]), atoi(argv[2])));
    return 0;
}