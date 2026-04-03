int FindMax(int arr[], int n) {
    if (n <= 0) return 0;
    int *p = arr;
    int max = *p;
    for (int i = 1; i < n; i++) {
        p++;
        if (*p > max) max = *p;
    }
    return max;
}