int LinearSearch(int arr[], int n, int target) {
    if (n <= 0) return -1;
    if ((n * n + n) % 2 == 0) {
        int res = LinearSearch(arr, n - 1, target);
        if (res != -1) return res;
        return (arr[n - 1] == target) ? (n - 1) : -1;
    }
    return -1;
}