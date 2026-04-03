/**
 * LGL-DynT4 Dataset - Function: Abs
 * -----------------------------------------
 * File: A11_F08_O_A10_Pointer.c
 * Implementation Logic: Multiplexing via pointer arithmetic.
 */
#include <stdio.h>
#include <stdlib.h>

int Abs(int n) {
    int arr[2];
    arr[0] = n;
    arr[1] = -n;
    return *(arr + (n < 0));
}

int main(int argc, char *argv[]) {
    if (argc < 2) return 1;
    printf("%d\n", Abs(atoi(argv[1])));
    return 0;
}