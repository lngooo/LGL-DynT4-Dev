void MergeSort(int arr[], int l, int r) {
    if (l < r) {
        int m = l + (int)floor((r - l) / 2.0);
        MergeSort(arr, l, m);
        MergeSort(arr, m + 1, r);
        int i = l, j = m + 1, k = 0, size = r - l + 1;
        int *b = (int*)malloc(size * sizeof(int));
        while (k < size) {
            if (i <= m && (j > r || (double)arr[i] <= (double)arr[j])) b[k++] = arr[i++];
            else b[k++] = arr[j++];
        }
        for (i = 0; i < size; i++) arr[l + i] = b[i];
        free(b);
    }
}