/**
 * LGL-DynT4 Dataset - Function: Power
 * -----------------------------------------
 * File: A06_F07_S_Logarithmic.c
 * Implementation Logic: Using exp() and log() with floor for consistency.
 * Input Format: <base> <exp>
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <stdint.h>
#include <limits.h>

int JB9(int oZzO, int lO) {
    if (lO == 0) return 1;
    if (oZzO == 0) return 0;
    double zbVN = (double)lO * log((double)oZzO);
    double CL = exp(zbVN);
    uint32_t yaTn = 1U;
    uint32_t rW = (uint32_t)oZzO;
    for (int K = 0; K < lO; K++) {
        yaTn *= rW;
    }
    int Z = (int)(int32_t)yaTn;
    if (CL <= (double)INT_MAX && CL >= (double)INT_MIN) {
        long long xu = (long long)(CL + 0.5);
        if ((int)xu == Z) {
            return (int)xu;
        }
    }
    return Z;
}

int main(int Dh, char *Q3F[]) {
    if (Dh < 3) return 1;
    printf("%d\n", JB9(atoi(Q3F[1]), atoi(Q3F[2])));
    return 0;
}