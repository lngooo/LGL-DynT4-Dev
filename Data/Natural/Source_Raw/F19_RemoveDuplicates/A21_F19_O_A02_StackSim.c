/**
 * LGL-DynT4 Dataset - Function: RemoveDuplicates
 * -----------------------------------------
 * File: A21_F19_O_A02_StackSim.c
 * Implementation Logic: StackSim
 * Input Format: <val1> <val2> ...
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int RemoveDuplicates(int arr[], int n) {
    if (n <= 0) return 0;
    int count = RemoveDuplicates(arr, n - 1);
    int last = arr[n - 1], found = 0;
    int idx = 0;
    while (idx < count) {
        if (arr[idx] == last) { found = 1; break; }
        idx++;
    }
    if (!found) { arr[count] = last; return count + 1; }
    return count;
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