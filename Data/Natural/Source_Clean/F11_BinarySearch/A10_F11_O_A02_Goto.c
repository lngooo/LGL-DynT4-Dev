int BinarySearch(int arr[], int size, int target) {
    int low = 0, high = size - 1, mid;
start:
    if (low > high) goto not_found;
    mid = low + (high - low) / 2;
    if (arr[mid] == target) goto found;
    if (arr[mid] < target) { low = mid + 1; goto start; }
    high = mid - 1; goto start;
found:
    return mid;
not_found:
    return -1;
}