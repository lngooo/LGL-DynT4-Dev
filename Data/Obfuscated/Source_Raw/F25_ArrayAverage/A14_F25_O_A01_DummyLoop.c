/**
 * LGL-DynT4 Dataset - Function: ArrayAverage
 * -----------------------------------------
 * File: A14_F25_O_A01_DummyLoop.c
 * Implementation Logic: DummyLoop
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

double KvO(int V[], int K) {
    double J = 0;
    for (int I = 0; I < K; I++) {
        for(int ZG=0; ZG<1; ZG++) J += V[I];
    }
    return (K > 0) ? (J / K) : 0.0;
}

int main(int NPmW, char *X[]) {
    if (NPmW < 2) return 0;
    int K = NPmW - 1;
    int *V = (int *)malloc(K * sizeof(int));
    for (int I = 0; I < K; I++) V[I] = atoi(X[I + 1]);

    double rDC4 = KvO(V, K);
    printf("%.2f\n", rDC4);

    free(V);
    return 0;
}