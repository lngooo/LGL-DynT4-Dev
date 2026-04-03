void MergeSort(int arr[], int l, int r) {
    if (l < r) {
        int m = l + (r - l) / 2;
        MergeSort(arr, l, m);
        MergeSort(arr, m + 1, r);
        int n1 = m - l + 1, n2 = r - m;
        int L[128], R[128]; 
        for (int i = 0; i < n1; i++) L[i] = arr[l + i];
        for (int j = 0; j < n2; j++) R[j] = arr[m + 1 + j];
        L[n1] = 2147483647; R[n2] = 2147483647; 
        int i = 0, j = 0;
        for (int k = l; k <= r; k++) arr[k] = (L[i] <= R[j]) ? L[i++] : R[j++];
    }
}