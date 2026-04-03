/**
 * LGL-DynT4 Dataset - Function: BinarySearch
 * -----------------------------------------
 * File: A17_F11_O_A08_Long.c
 * Implementation Logic: Jump search using long long for indices.
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int BinarySearch(int arr[], int size, int target) {
    long long s = size, t = target;
    long long step = sqrt(s), p = 0;
    while (arr[(step < s ? step : s) - 1] < t) {
        p = step; step += sqrt(s);
        if (p >= s) return -1;
    }
    while (arr[p] < t) {
        p++;
        if (p == (step < s ? step : s)) return -1;
    }
    return (arr[p] == t) ? (int)p : -1;
}

int main(int argc, char *argv[]) {
    if (argc < 3) return 1;
    int target = atoi(argv[1]);
    int size = argc - 2;
    int *arr = (int*)malloc(size * sizeof(int));
    for(int i=0; i<size; i++) arr[i] = atoi(argv[i+2]);
    printf("%d\n", BinarySearch(arr, size, target));
    free(arr);
    return 0;
}