void MergeSort(int arr[], int l, int r) {
    if (l < r) {
        int m = (l + r) / 2;
        MergeSort(arr, l, m);
        MergeSort(arr, m + 1, r);
        for (int s2 = m + 1; s2 <= r; s2++) {
            int v = arr[s2], p = s2 - 1;
            while (p >= l && arr[p] > v) { arr[p + 1] = arr[p]; p--; }
            arr[p + 1] = v;
        }
    }
}