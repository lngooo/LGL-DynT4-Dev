/**
 * LGL-DynT4 Dataset - Function: Log2
 * -----------------------------------------
 * File: A07_F10_O_A01_Goto.c
 * Implementation Logic: Goto
 * Input Format: <integer>
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int Log2(int n) {
    int res = 0;
loop:
    n >>= 1;
    if (n == 0) goto end;
    res++;
    goto loop;
end:
    return res;
}

int main(int argc, char *argv[]) {
    if (argc < 2) return 0;
    int n = atoi(argv[1]);
    if (n <= 0) return 0; 
    int result = Log2(n);
    printf("%d\n", result);
    return 0;
}