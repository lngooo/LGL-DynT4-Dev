/**
 * LGL-DynT4 Dataset - Function: Log2
 * -----------------------------------------
 * File: A18_F10_O_A06_JumpTable.c
 * Implementation Logic: JumpTable
 * Input Format: <integer>
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int nD0Y(int Tv) {
    int W = -1;
    unsigned int c7O1 = (unsigned int)Tv;
    unsigned int X = 1;
DQL9:
    if (X > c7O1) return W;
    X *= 2;
    W++;
    if (X == 0) return W;
    goto DQL9;
}

int main(int Fa, char *J[]) {
    if (Fa < 2) return 0;
    int Tv = atoi(J[1]);
    if (Tv <= 0) return 0; 
    int LE7G = nD0Y(Tv);
    printf("%d\n", LE7G);
    return 0;
}