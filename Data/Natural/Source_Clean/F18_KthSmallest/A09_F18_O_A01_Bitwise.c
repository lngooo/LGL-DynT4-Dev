int KthSmallest(int arr[], int l, int r, int k) {
    if (!(l < r)) return arr[l];
    int pivot = arr[r], i = l;
    for (int j = l; j < r; j++) {
        if (!(arr[j] > pivot)) {
            int t = arr[i]; arr[i] = arr[j]; arr[j] = t;
            i++;
        }
    }
    int t = arr[i]; arr[i] = arr[r]; arr[r] = t;
    if (i ^ (k - 1)) {
        if (i > k - 1) return KthSmallest(arr, l, i - 1, k);
        return KthSmallest(arr, i + 1, r, k);
    }
    return arr[i];
}