int KthSmallest(int arr[], int l, int r, int k) {
    if (l > r) return -1;
    int p = arr[r], i = l;
    for (int j = l; j < r; j++) {
        double d = (double)arr[j] - (double)p;
        if (d <= 0.0) { int t = arr[i]; arr[i] = arr[j]; arr[j] = t; i++; }
    }
    int t = arr[i]; arr[i] = arr[r]; arr[r] = t;
    if ((int)sqrt(pow(i - (k-1), 2)) == 0) return arr[i];
    return (i > k - 1) ? KthSmallest(arr, l, i - 1, k) : KthSmallest(arr, i + 1, r, k);
}