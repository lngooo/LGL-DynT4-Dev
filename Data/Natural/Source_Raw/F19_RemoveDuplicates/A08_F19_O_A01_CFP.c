/**
 * LGL-DynT4 Dataset - Function: RemoveDuplicates
 * -----------------------------------------
 * File: A08_F19_O_A01_CFP.c
 * Implementation Logic: CFP
 * Input Format: <val1> <val2> ...
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int RemoveDuplicates(int arr[], int n) {
    int i = 0, sz = 0, state = 0;
    while (state != 3) {
        switch (state) {
            case 0: state = (i < n) ? 1 : 3; break;
            case 1: {
                int dup = 0;
                for (int k = 0; k < sz; k++) if (arr[i] == arr[k]) dup = 1;
                if (!dup) { arr[sz] = arr[i]; sz++; }
                i++; state = 0; break;
            }
        }
    }
    return sz;
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