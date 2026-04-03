/**
 * LGL-DynT4 Dataset - Function: Sqrt
 * -----------------------------------------
 * File: A13_F05_O_A12_Redundant.c
 * Implementation Logic: Odd subtraction with redundant math and temporary variables.
 * Input Format: <n>
 */
#include <stdio.h>
#include <stdlib.h>

int Sqrt(int n) {
    int c = 0, o = 1;
    int dummy = 100;
    while (n >= o) {
        int next_o = o + 2;
        n = n - o;
        o = next_o;
        c++;
        dummy = (dummy % 2 == 0) ? dummy / 2 : dummy * 3 + 1;
    }
    return c;
}

int main(int argc, char *argv[]) {
    if (argc < 2) return 1;
    printf("%d\n", Sqrt(atoi(argv[1])));
    return 0;
}