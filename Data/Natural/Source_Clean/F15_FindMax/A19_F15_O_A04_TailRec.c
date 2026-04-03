int tr(int a[], int n, int idx, int m) {
    if (idx == n) return m;
    return tr(a, n, idx + 1, (a[idx] > m ? a[idx] : m));
}

int FindMax(int arr[], int n) { return tr(arr, n, 0, arr[0]); }