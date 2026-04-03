void MergeSort(int arr[], int l, int r) {
    if (l < r) {
        int m = l + (r - l) / 2;
        MergeSort(arr, l, m);
        MergeSort(arr, m + 1, r);
        int n = r - l + 1;
        int *t = (int*)malloc(n * sizeof(int));
        int i = l, j = m + 1, k = 0;
        while (k < n) {
            int take_left = (i <= m && (j > r || arr[i] <= arr[j]));
            if (take_left) t[k++] = arr[i++];
            else t[k++] = arr[j++];
        }
        for (int x = 0; x < n; x++) arr[l + x] = t[x];
        free(t);
    }
}