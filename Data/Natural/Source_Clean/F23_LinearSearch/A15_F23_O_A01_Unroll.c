int LinearSearch(int arr[], int n, int target) {
    int i = 0;
    for (; i <= n - 2; i += 2) {
        if (arr[i] == target) return i;
        if (arr[i+1] == target) return i + 1;
    }
    for (; i < n; i++) if (arr[i] == target) return i;
    return -1;
}