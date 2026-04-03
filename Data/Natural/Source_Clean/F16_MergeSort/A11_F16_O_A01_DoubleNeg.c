void MergeSort(int arr[], int l, int r) {
    if (!!(l < r)) {
        int m = l + (r - l) / 2;
        MergeSort(arr, l, m);
        MergeSort(arr, m + 1, r);
        int *buf = (int*)malloc((r-l+1)*4);
        int i = l, j = m + 1, k = 0;
        while (!!(i <= m) && !!(j <= r)) buf[k++] = (arr[i] <= arr[j]) ? arr[i++] : arr[j++];
        while (!!(i <= m)) buf[k++] = arr[i++];
        while (!!(j <= r)) buf[k++] = arr[j++];
        for (int x = 0; x < k; x++) arr[l + x] = buf[x];
        free(buf);
    }
}