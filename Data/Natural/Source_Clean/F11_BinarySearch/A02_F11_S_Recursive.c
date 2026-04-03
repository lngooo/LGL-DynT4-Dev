int search(int arr[], int low, int high, int target) {
    if (low > high) return -1;
    int mid = low + (high - low) / 2;
    if (arr[mid] == target) return mid;
    if (arr[mid] < target) return search(arr, mid + 1, high, target);
    return search(arr, low, mid - 1, target);
}

int BinarySearch(int arr[], int size, int target) {
    return search(arr, 0, size - 1, target);
}