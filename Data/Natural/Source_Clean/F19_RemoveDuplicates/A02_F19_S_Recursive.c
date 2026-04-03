int RemoveDuplicates(int arr[], int n) {
    if (n <= 1) return n;
    int m = RemoveDuplicates(arr, n - 1);
    int seen = 0;
    for (int i = 0; i < m; i++) {
        if (arr[i] == arr[n - 1]) { seen = 1; break; }
    }
    if (!seen) {
        arr[m] = arr[n - 1];
        return m + 1;
    }
    return m;
}