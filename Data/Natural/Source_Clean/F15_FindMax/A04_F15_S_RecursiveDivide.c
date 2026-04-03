int find_max_rec(int arr[], int l, int r) {
    if (l == r) return arr[l];
    int mid = l + (r - l) / 2;
    int m1 = find_max_rec(arr, l, mid);
    int m2 = find_max_rec(arr, mid + 1, r);
    return (m1 > m2) ? m1 : m2;
}

int FindMax(int arr[], int n) {
    if (n <= 0) return 0;
    return find_max_rec(arr, 0, n - 1);
}