int LinearSearch(int arr[], int n, int target) {
    if (n <= 0) return -1;
    int res = (arr[0] == target) ? 0 : -2;
    if (res == 0) return 0;
    res = LinearSearch(arr + 1, n - 1, target);
    return (res == -1) ? -1 : res + 1;
}