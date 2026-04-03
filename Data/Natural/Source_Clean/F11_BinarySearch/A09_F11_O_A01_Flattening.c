int BinarySearch(int arr[], int size, int target) {
    int low = 0, high = size - 1, mid, state = 0;
    while (state != -1) {
        switch (state) {
            case 0: state = (low <= high) ? 1 : 5; break;
            case 1: mid = low + (high - low) / 2; state = (arr[mid] == target) ? 2 : 3; break;
            case 2: return mid;
            case 3: state = (arr[mid] < target) ? 4 : 6; break;
            case 4: low = mid + 1; state = 0; break;
            case 5: return -1;
            case 6: high = mid - 1; state = 0; break;
        }
    }
    return -1;
}