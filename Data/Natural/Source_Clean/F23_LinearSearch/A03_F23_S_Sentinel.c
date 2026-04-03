int LinearSearch(int arr[], int n, int target) {
    if (n <= 0) return -1;
    int last = arr[n-1];
    arr[n-1] = target;
    int i = 0;
    while (arr[i] != target) i++;
    arr[n-1] = last;
    return (i < n - 1 || last == target) ? i : -1;
}