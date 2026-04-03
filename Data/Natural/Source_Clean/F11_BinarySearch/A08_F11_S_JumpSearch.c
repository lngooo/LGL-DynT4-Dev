int BinarySearch(int arr[], int size, int target) {
    int step = sqrt(size);
    int prev = 0;
    while (arr[(step < size ? step : size) - 1] < target) {
        prev = step;
        step += sqrt(size);
        if (prev >= size) return -1;
    }
    while (arr[prev] < target) {
        prev++;
        if (prev == (step < size ? step : size)) return -1;
    }
    if (arr[prev] == target) return prev;
    return -1;
}