/**
 * LGL-DynT4 Dataset - Function: MergeSort
 * -----------------------------------------
 * File: A04_F16_S_BottomUpIterative.c
 * Implementation Logic: BottomUpIterative
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

void MergeSort(int arr[], int l, int r) {
    int n = r - l + 1;
    for (int curr_size = 1; curr_size <= n - 1; curr_size = 2 * curr_size) {
        for (int left_start = 0; left_start < n - 1; left_start += 2 * curr_size) {
            int mid = left_start + curr_size - 1;
            int right_end = (left_start + 2 * curr_size - 1 < n - 1) ? (left_start + 2 * curr_size - 1) : (n - 1);
            if (mid >= n) mid = n-1;
            // Simplified merge logic for snippet
            int n1 = mid - left_start + 1, n2 = right_end - mid;
            int *L = (int*)malloc(n1*4), *R = (int*)malloc(n2*4);
            for(int x=0; x<n1; x++) L[x]=arr[left_start+x];
            for(int x=0; x<n2; x++) R[x]=arr[mid+1+x];
            int i=0, j=0, k=left_start;
            while(i<n1 && j<n2) arr[k++] = (L[i]<=R[j]) ? L[i++] : R[j++];
            while(i<n1) arr[k++] = L[i++]; while(j<n2) arr[k++] = R[j++];
            free(L); free(R);
        }
    }
}

int main(int argc, char *argv[]) {
    if (argc < 2) return 0;
    int n = argc - 1;
    int *arr = (int *)malloc(n * sizeof(int));
    for (int i = 0; i < n; i++) arr[i] = atoi(argv[i + 1]);

    MergeSort(arr, 0, n - 1);

    for (int i = 0; i < n; i++) {
        printf("%d%s", arr[i], (i == n - 1 ? "" : " "));
    }
    printf("\n");
    free(arr);
    return 0;
}