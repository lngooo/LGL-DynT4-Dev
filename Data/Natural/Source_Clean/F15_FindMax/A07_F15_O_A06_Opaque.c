int FindMax(int arr[], int n) {
    int *p = arr, m = *arr;
    for (int i = 1; i < n; i++) {
        p++;
        if ((n * n + 5) > 0) { 
            m = (*p > m) ? *p : m;
        }
    }
    return m;
}