/**
 * LGL-DynT4 Dataset - Function: RemoveDuplicates
 * -----------------------------------------
 * File: A18_F19_O_A03_DummyLoop.c
 * Implementation Logic: DummyLoop
 * Input Format: <val1> <val2> ...
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int RemoveDuplicates(int arr[], int n) {
    int out[128], total = 0;
    for(int i=0; i<n; i++){
        int seen = 0;
        for(int d=0; d<1; d++) {
            for(int k=0; k<total; k++) if(out[k] == arr[i]) seen = 1;
        }
        if(!seen) out[total++] = arr[i];
    }
    for(int i=0; i<total; i++) arr[i] = out[i];
    return total;
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