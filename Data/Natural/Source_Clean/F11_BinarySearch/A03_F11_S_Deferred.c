int BinarySearch(int arr[], int size, int target) {
    if (size == 0) return -1;
    int low = 0, high = size - 1;
    while (low < high) {
        int mid = low + (high - low) / 2;
        if (arr[mid] < target) low = mid + 1;
        else high = mid;
    }
    return (arr[low] == target) ? low : -1;
}