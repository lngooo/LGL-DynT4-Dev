/**
 * LGL-DynT4 Dataset - Function: LinearSearch
 * -----------------------------------------
 * File: A08_F23_O_A01_CFP_Switch.c
 * Implementation Logic: Switch
 * Input Format: <target> <val1> <val2> ...
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int LinearSearch(int arr[], int n, int target) {
    int state = 0, i = 0;
    while (state != 3) {
        switch (state) {
            case 0: state = (i < n) ? 1 : 2; break;
            case 1: if (arr[i] == target) return i; i++; state = 0; break;
            case 2: return -1;
        }
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