int BinarySearch(int arr[], int size, int target) {
    int l = 0, h = size - 1;
    while (1) {
        if (l > h) return -1;
        int m = l + (h - l) / 2;
        if (arr[m] == target) return m;
        if (arr[m] < target) l = m + 1;
        else h = m - 1;
    }
}