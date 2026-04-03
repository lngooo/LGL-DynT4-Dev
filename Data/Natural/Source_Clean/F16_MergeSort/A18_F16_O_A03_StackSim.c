void MergeSort(int arr[], int l, int r) {
    if (l >= r) return;
    int mid = l + (r - l) / 2;
    MergeSort(arr, l, mid);
    MergeSort(arr, mid + 1, r);
    int temp[256], i = l, j = mid + 1, k = l;
    while (i <= mid || j <= r) {
        if (i <= mid && (j > r || arr[i] <= arr[j])) temp[k++] = arr[i++];
        else temp[k++] = arr[j++];
    }
    for (int x = l; x <= r; x++) arr[x] = temp[x];
}