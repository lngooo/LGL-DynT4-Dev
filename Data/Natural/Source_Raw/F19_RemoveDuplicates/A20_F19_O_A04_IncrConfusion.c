/**
 * LGL-DynT4 Dataset - Function: RemoveDuplicates
 * -----------------------------------------
 * File: A20_F19_O_A04_IncrConfusion.c
 * Implementation Logic: IncrConfusion
 * Input Format: <val1> <val2> ...
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int RemoveDuplicates(int arr[], int n) {
    int *src = arr, *dst = arr;
    int i = -1;
    while (++i < n) {
        int *c = arr, hit = 0;
        while (c < dst) { if (*c == *src) hit = 1; c++; }
        if (!hit) *dst++ = *src;
        src++;
    }
    return (int)(dst - arr);
}

int main(int argc, char *argv[]) {
    if (argc < 2) return 0;
    int size = argc - 1;
    int arr[128];
    for (int i = 0; i < size; i++) {
        arr[i] = atoi(argv[i + 1]);
    }
    int new_size = RemoveDuplicates(arr, size);
    for (int i = 0; i < new_size; i++) {
        printf("%d%s", arr[i], (i == new_size - 1 ? "" : " "));
    }
    printf("\n");
    return 0;
}