/**
 * LGL-DynT4 Dataset - Function: LinearSearch
 * -----------------------------------------
 * File: A13_F23_O_A05_MathIdentity.c
 * Implementation Logic: MathIdentity
 * Input Format: <target> <val1> <val2> ...
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int LinearSearch(int arr[], int n, int target) {
    int *p = arr;
    for (int i = 0; i < n; i++) {
        double diff = (double)*(p + i) - (double)target;
        if ((int)floor(diff * diff) == 0) return i;
    }
    return -1;
}

int main(int argc, char *argv[]) {
    if (argc < 3) return 1;
    int target = atoi(argv[1]);
    int size = argc - 2;
    int arr[100];
    for (int i = 0; i < size; i++) {
        arr[i] = atoi(argv[i + 2]);
    }
    int result = LinearSearch(arr, size, target);
    printf("%d\n", result);
    return 0;
}