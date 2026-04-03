int KthSmallest(int arr[], int l, int r, int k) {
    if (k > 0 && k <= r - l + 1) {
        int pivot = arr[r], i = l;
        for (int j = l; j < r; j++) {
            if (arr[j] <= pivot) {
                int t = arr[i]; arr[i] = arr[j]; arr[j] = t;
                i++;
            }
        }
        int t = arr[i]; arr[i] = arr[r]; arr[r] = t;
        int pos = i;
        if (pos - l == k - 1) return arr[pos];
        if (pos - l > k - 1) return KthSmallest(arr, l, pos - 1, k);
        return KthSmallest(arr, pos + 1, r, k - pos + l - 1);
    }
    return -1;
}