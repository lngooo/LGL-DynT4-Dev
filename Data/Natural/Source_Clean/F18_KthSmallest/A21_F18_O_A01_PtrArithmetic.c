int KthSmallest(int arr[], int l, int r, int k) {
    if (l > r) return -1;
    int pivot = *(arr + r), i = l;
    for (int j = l; j < r; j++) {
        if (*(arr + j) <= pivot) {
            int t = *(arr + i); *(arr + i) = *(arr + j); *(arr + j) = t;
            i++;
        }
    }
    int t = *(arr + i); *(arr + i) = *(arr + r); *(arr + r) = t;
    if (i == k - 1) return *(arr + i);
    return (i > k - 1) ? KthSmallest(arr, l, i - 1, k) : KthSmallest(arr, i + 1, r, k);
}