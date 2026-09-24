/**
 * LGL-DynT4 Dataset - Function: Sum
 * -----------------------------------------
 * File: A12_F01_O_A10_DoWhile.c
 * Implementation Logic: Logic converted to do-while with boundary check.
 * Input Format: <n>
 */
#include <stdio.h>
#include <stdlib.h>

int eWIX(int iQ) {
    if (iQ <= 0) return 0;
    int JkqH = 0;
    int n7IW = 1;
    do {
        JkqH += n7IW;
        n7IW++;
    } while (n7IW <= iQ);
    return JkqH;
}

int main(int Tt, char *QPxC[]) {
    if (Tt < 2) return 1;
    printf("%d\n", eWIX(atoi(QPxC[1])));
    return 0;
}