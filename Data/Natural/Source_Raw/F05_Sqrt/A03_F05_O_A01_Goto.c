/**
 * LGL-DynT4 Dataset - Function: Sqrt
 * -----------------------------------------
 * File: A03_F05_O_A01_Goto.c
 * Implementation Logic: Newton's method using goto to disrupt structured control flow.
 * Input Format: <n>
 */
#include <stdio.h>
#include <stdlib.h>

int Sqrt(int n) {
    if (n < 0) return -1;
    if (n < 2) return n;
    long x = n, y = (x + 1) / 2;
loop:
    if (!(y < x)) goto end;
    x = y;
    y = (x + n / x) / 2;
    goto loop;
end:
    return (int)x;
}

int main(int argc, char *argv[]) {
    if (argc < 2) return 1;
    printf("%d\n", Sqrt(atoi(argv[1])));
    return 0;
}