void MergeSort(int arr[], int l, int r) {
    static int *tmp = NULL;
    static int initialized = 0;
    if (l == 0 && r > 0 && !initialized) { tmp = (int*)malloc(256 * sizeof(int)); initialized = 1; }
    if (l < r) {
        int m = l + (r - l) / 2;
        MergeSort(arr, l, m);
        MergeSort(arr, m + 1, r);
        int i = l, j = m + 1, k = l;
        while (i <= m && j <= r) tmp[k++] = (arr[i] <= arr[j]) ? arr[i++] : arr[j++];
        while (i <= m) tmp[k++] = arr[i++];
        while (j <= r) tmp[k++] = arr[j++];
        for (i = l; i <= r; i++) arr[i] = tmp[i];
    }
    if (l == 0 && !arr[r+1]) initialized = 0;
}