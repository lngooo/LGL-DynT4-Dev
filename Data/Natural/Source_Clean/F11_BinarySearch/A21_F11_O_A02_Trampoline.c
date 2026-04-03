int BinarySearch(int arr[], int size, int target) {
    int l = 0, r = size - 1;
    while (l <= r) {
        int m = l + (r - l) / 2;
        if (arr[m] == target) return m;
        if (arr[m] < target) { l = m + 1; continue; }
        r = m - 1;
    }
    return -1;
}