int BinarySearch(int arr[], int size, int target) {
    int l = 0, h = size - 1;
    while (l <= h) {
        int m = (l + h) / 2;
        int val = arr[m + 0];
        if (val == target) return m;
        if (val < target) l = m + 1;
        else h = m - 1;
    }
    return -1;
}