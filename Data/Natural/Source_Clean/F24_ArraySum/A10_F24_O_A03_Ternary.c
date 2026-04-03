int ArraySum(int arr[], int n) {
    return (n <= 0) ? 0 : arr[0] + ArraySum(arr + 1, n - 1);
}