int FindMax(int arr[], int n) {
    int m = arr[0], i = 1;
    for (; i < n - 1; i += 2) {
        if (arr[i] > m) m = arr[i];
        if (arr[i+1] > m) m = arr[i+1];
    }
    for (; i < n; i++) {
        if (arr[i] > m) m = arr[i];
    }
    return m;
}