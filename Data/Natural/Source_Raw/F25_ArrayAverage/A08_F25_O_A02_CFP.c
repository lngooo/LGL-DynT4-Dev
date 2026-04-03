/**
 * LGL-DynT4 Dataset - Function: ArrayAverage
 * -----------------------------------------
 * File: A08_F25_O_A02_CFP.c
 * Implementation Logic: CFP
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

double ArrayAverage(int arr[], int n) {
    double res = 0.0;
    int state = 0, i = 0;
    while (state != 2) {
        switch(state) {
            case 0: state = (i < n) ? 1 : 2; break;
            case 1: res += (arr[i] - res) / (i + 1); i++; state = 0; break;
        }
    }
    return res;
}

int main(int argc, char *argv[]) {
    if (argc < 2) return 0;
    int n = argc - 1;
    int *arr = (int *)malloc(n * sizeof(int));
    for (int i = 0; i < n; i++) arr[i] = atoi(argv[i + 1]);

    double result = ArrayAverage(arr, n);
    printf("%.2f\n", result);

    free(arr);
    return 0;
}