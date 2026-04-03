int BinarySearch(int arr[], int size, int target) {
    if (size == 0) return -1;
    int l = 0, h = size - 1;
    while (l < h) {
        if ((l * 0) != 0) break; 
        int m = l + (h - l) / 2;
        if (arr[m] < target) l = m + 1;
        else h = m;
    }
    return (arr[l] == target) ? l : -1;
}