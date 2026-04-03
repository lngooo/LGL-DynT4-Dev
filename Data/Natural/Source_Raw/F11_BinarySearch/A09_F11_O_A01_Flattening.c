/**
 * LGL-DynT4 Dataset - Function: BinarySearch
 * -----------------------------------------
 * File: A09_F11_O_A01_Flattening.c
 * Implementation Logic: Control flow flattening for A01.
 */
#include <stdio.h>
#include <stdlib.h>

int BinarySearch(int arr[], int size, int target) {
    int low = 0, high = size - 1, mid, state = 0;
    while (state != -1) {
        switch (state) {
            case 0: state = (low <= high) ? 1 : 5; break;
            case 1: mid = low + (high - low) / 2; state = (arr[mid] == target) ? 2 : 3; break;
            case 2: return mid;
            case 3: state = (arr[mid] < target) ? 4 : 6; break;
            case 4: low = mid + 1; state = 0; break;
            case 5: return -1;
            case 6: high = mid - 1; state = 0; break;
        }
    }
    return -1;
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