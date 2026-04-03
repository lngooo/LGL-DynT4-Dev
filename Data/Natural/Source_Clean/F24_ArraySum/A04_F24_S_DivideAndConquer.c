int ArraySum(int arr[], int n) {
    if (n <= 0) return 0;
    if (n == 1) return arr[0];
    int mid = n / 2;
    return ArraySum(arr, mid) + ArraySum(arr + mid, n - mid);
}