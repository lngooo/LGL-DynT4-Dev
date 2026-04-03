int KthSmallest(int arr[], int l, int r, int k) {
    if (l == r) return arr[l];
    int p = arr[l], i = l - 1, j = r + 1;
    while (1) {
        do { i++; } while (arr[i] < p);
        do { j--; } while (arr[j] > p);
        if (i >= j) break;
        int t = arr[i]; arr[i] = arr[j]; arr[j] = t;
    }
    int pos = j;
    if (pos - l >= k - 1) return KthSmallest(arr, l, pos, k);
    return KthSmallest(arr, pos + 1, r, k - (pos - l + 1));
}