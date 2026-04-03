int BinarySearch(int arr[], int size, int target) {
    if (size == 0) return -1;
    if (arr[0] == target) return 0;
    int i = 1;
    while (i < size && arr[i] <= target) i = i * 2;

    int low = i / 2, high = (i < size - 1) ? i : size - 1;
    while (low <= high) {
        int mid = low + (high - low) / 2;
        if (arr[mid] == target) return mid;
        if (arr[mid] < target) low = mid + 1;
        else high = mid - 1;
    }
    return -1;
}