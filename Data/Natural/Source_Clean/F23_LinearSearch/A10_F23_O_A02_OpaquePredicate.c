int LinearSearch(int arr[], int n, int target) {
    if (n <= 0) return -1;
    if ((n * n + n) % 2 == 0) {
        if (arr[n-1] == target) return n-1;
        return LinearSearch(arr, n-1, target);
    }
    return -1;
}