/**
 * LGL-DynT4 Dataset - Function: Log2
 * -----------------------------------------
 * File: A14_F10_O_A01_Unroll.c
 * Implementation Logic: Unroll
 * Input Format: <integer>
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int Q3(int HHS) {
    int B = 0;
    while (HHS >= 4) { HHS >>= 2; B += 2; }
    while (HHS >= 2) { HHS >>= 1; B += 1; }
    return B;
}

int main(int Ew, char *j10J[]) {
    if (Ew < 2) return 0;
    int HHS = atoi(j10J[1]);
    if (HHS <= 0) return 0; 
    int a = Q3(HHS);
    printf("%d\n", a);
    return 0;
}