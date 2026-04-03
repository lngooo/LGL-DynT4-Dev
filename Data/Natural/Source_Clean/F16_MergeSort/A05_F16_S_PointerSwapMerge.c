void MergeSort(int arr[], int l, int r) {
    if (r <= l) return;
    int m = (l + r) >> 1;
    MergeSort(arr, l, m);
    MergeSort(arr, m + 1, r);
    int *b = (int*)malloc((r - l + 1) * sizeof(int));
    int i = l, j = m + 1, k = 0;
    while (i <= m || j <= r) {
        if (i <= m && (j > r || arr[i] <= arr[j])) b[k++] = arr[i++];
        else b[k++] = arr[j++];
    }
    for (i = 0; i < k; i++) arr[l + i] = b[i];
    free(b);
}