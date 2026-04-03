int BinarySearch(int arr[], int size, int target) {
    int lo = 0, hi = size - 1;
    while (lo <= hi) {
        int m = lo + ((hi - lo) >> 1);
        if (arr[m] == target) return m;
        if (arr[m] < target) lo = m + 1;
        else hi = m - 1;
    }
    return -1;
}