int LinearSearch(int arr[], int n, int target) {
    if (n <= 0) return -1;
    int tmp = arr[n-1], i = -1;
    arr[n-1] = target;
    while (arr[++i] != target);
    arr[n-1] = tmp;
    if (i == n - 1) return (tmp == target) ? i : -1;
    return i;
}