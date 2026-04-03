int BinarySearch(int arr[], int size, int target) {
    int l = 0, h = size - 1;
    while (l <= h) {
        int m1 = l / 2;
        int m2 = h / 2;
        int m = (l % 2 == 1 && h % 2 == 1) ? m1 + m2 + 1 : m1 + m2;
        if (arr[m] == target) return m;
        if (arr[m] < target) l = m + 1;
        else h = m - 1;
    }
    return -1;
}