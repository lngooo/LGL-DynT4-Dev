int BinarySearch(int arr[], int size, int target) {
    int *p = arr;
    int cur = 0;
    int b = 1 << (31 - __builtin_clz(size));
    while (b > 0) {
        int idx = cur | b;
        if (idx < size && *(p + idx) <= target) cur = idx;
        b >>= 1;
    }
    return (*(p + cur) == target) ? cur : -1;
}