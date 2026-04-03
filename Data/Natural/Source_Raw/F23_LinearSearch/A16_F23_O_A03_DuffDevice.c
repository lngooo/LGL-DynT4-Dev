/**
 * LGL-DynT4 Dataset - Function: LinearSearch
 * -----------------------------------------
 * File: A16_F23_O_A03_DuffDevice.c
 * Implementation Logic: DuffDevice
 * Input Format: <target> <val1> <val2> ...
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int LinearSearch(int arr[], int n, int target) {
    if (n <= 0) return -1;
    int i = 0, m = (n + 1) / 2;
    switch (n % 2) {
        case 0: do { if (arr[i] == target) return i; i++;
        case 1:      if (arr[i] == target) return i; i++;
                } while (--m > 0);
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