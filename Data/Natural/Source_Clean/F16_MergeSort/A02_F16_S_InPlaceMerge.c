void MergeSort(int arr[], int l, int r) {
    if (l < r) {
        int m = l + (r - l) / 2;
        MergeSort(arr, l, m);
        MergeSort(arr, m + 1, r);
        int start2 = m + 1;
        if (arr[m] <= arr[start2]) return;
        while (l <= m && start2 <= r) {
            if (arr[l] <= arr[start2]) l++;
            else {
                int val = arr[start2];
                int index = start2;
                while (index != l) { arr[index] = arr[index - 1]; index--; }
                arr[l] = val;
                l++; m++; start2++;
            }
        }
    }
}