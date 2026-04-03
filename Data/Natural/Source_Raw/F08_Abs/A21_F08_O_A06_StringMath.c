/**
 * LGL-DynT4 Dataset - Function: Abs
 * -----------------------------------------
 * File: A21_F08_O_A06_StringMath.c
 * Implementation Logic: String-based negative sign detection.
 */
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int Abs(int n) {
    char buf[32];
    sprintf(buf, "%d", n);
    if (buf[0] == '-') {
        return atoi(buf + 1);
    }
    return n;
}

int main(int argc, char *argv[]) {
    if (argc < 2) return 1;
    printf("%d\n", Abs(atoi(argv[1])));
    return 0;
}