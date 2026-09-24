int LinearSearch(int arr[], int n, int target) {
    if (n <= 0) return -1;
    int res = LinearSearch(arr, n - 1, target);
    if (res != -1) return res;
    return (arr[n - 1] == target) ? (n - 1) : -1;
}