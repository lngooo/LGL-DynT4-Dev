void MergeSort(int arr[], int l, int r) {
    if (l < r) {
        int m = (l + r) / 2;
        MergeSort(arr, l, m);
        MergeSort(arr, m + 1, r);
        int s_idx = 0, l_idx = l, r_idx = m + 1;
        int *merged = (int*)malloc((r-l+1)*4);
        while (l_idx <= m && r_idx <= r) {
            if (arr[l_idx] <= arr[r_idx]) merged[s_idx++] = arr[l_idx++];
            else merged[s_idx++] = arr[r_idx++];
        }
        while (l_idx <= m) merged[s_idx++] = arr[l_idx++];
        while (r_idx <= r) merged[s_idx++] = arr[r_idx++];
        for (int i = 0; i < s_idx; i++) arr[l + i] = merged[i];
        free(merged);
    }
}