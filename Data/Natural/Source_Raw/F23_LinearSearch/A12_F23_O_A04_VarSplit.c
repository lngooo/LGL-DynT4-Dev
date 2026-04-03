/**
 * LGL-DynT4 Dataset - Function: LinearSearch
 * -----------------------------------------
 * File: A12_F23_O_A04_VarSplit.c
 * Implementation Logic: VarSplit
 * Input Format: <target> <val1> <val2> ...
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int LinearSearch(int arr[], int n, int target) {
    int head = 0, tail = n - 1;
    while (head <= tail) {
        int left_val = arr[head];
        int right_val = arr[tail];
        if (left_val == target) return head;
        if (right_val == target) return tail;
        head += 1; tail -= 1;
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