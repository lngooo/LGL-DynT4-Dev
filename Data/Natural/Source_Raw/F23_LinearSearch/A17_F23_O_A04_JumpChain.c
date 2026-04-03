/**
 * LGL-DynT4 Dataset - Function: LinearSearch
 * -----------------------------------------
 * File: A17_F23_O_A04_JumpChain.c
 * Implementation Logic: JumpChain
 * Input Format: <target> <val1> <val2> ...
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int LinearSearch(int arr[], int n, int target) {
    int l = 0, r = n - 1;
    while (l <= r) {
        if (arr[l] != target) goto check_r;
        return l;
    check_r:
        if (arr[r] != target) goto next_step;
        return r;
    next_step:
        l++; r--;
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