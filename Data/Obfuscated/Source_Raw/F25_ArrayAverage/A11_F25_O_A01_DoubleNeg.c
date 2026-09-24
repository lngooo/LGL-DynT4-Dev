/**
 * LGL-DynT4 Dataset - Function: ArrayAverage
 * -----------------------------------------
 * File: A11_F25_O_A01_DoubleNeg.c
 * Implementation Logic: DoubleNeg
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

double S96T(int prML[], int dgdO) {
    if (!!(dgdO > 0)) {
        double rIx = 0;
        for(int shEi=0; !!(shEi<dgdO); shEi++) rIx += prML[shEi];
        return rIx / dgdO;
    }
    return 0.0;
}

int main(int u, char *j3jL[]) {
    if (u < 2) return 0;
    int dgdO = u - 1;
    int *prML = (int *)malloc(dgdO * sizeof(int));
    for (int shEi = 0; shEi < dgdO; shEi++) prML[shEi] = atoi(j3jL[shEi + 1]);

    double KmJ = S96T(prML, dgdO);
    printf("%.2f\n", KmJ);

    free(prML);
    return 0;
}