void MergeSort(int arr[], int l, int r) {
    if (l >= r) return;
    int m = (l + r) / 2;
    MergeSort(arr, l, m);
    MergeSort(arr, m + 1, r);
    int *b = (int*)malloc((r-l+1)*4), i = l, j = m+1, k = 0;
    for (int d = 0; d < 1; d++) {
        while (i <= m && j <= r) b[k++] = (arr[i] <= arr[j]) ? arr[i++] : arr[j++];
    }
    while (i <= m) b[k++] = arr[i++];
    while (j <= r) b[k++] = arr[j++];
    for (int x = 0; x < k; x++) arr[l + x] = b[x];
    free(b);
}