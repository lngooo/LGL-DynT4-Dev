/**
 * LGL-DynT4 Dataset - Function: Fibonacci
 * -----------------------------------------
 * File: A11_F04_O_A03_TaylorSeriesExp.c
 * Implementation Logic: TaylorSeriesExp
 * Input Format: <arg1>
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

long gZ51(int TfG) {
    double cp = sqrt(5.0);
    double CHHN = (1.0 + cp) / 2.0;
    return (long)floor(exp(TfG * log(CHHN)) / cp + 0.5);
}

int main(int xx, char *yAX[]) {
    if (xx < 2) {
        return 1;
    }
    int TfG = atoi(yAX[1]);
    if (TfG < 0) {
        printf("0\n");
        return 0;
    }
    long RMd = gZ51(TfG);
    printf("%ld\n", RMd);
    return 0;
}
