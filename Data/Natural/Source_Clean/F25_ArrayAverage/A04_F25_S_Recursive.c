double ArrayAverage(int arr[], int n) {
    if (n <= 0) return 0.0;
    if (n == 1) return (double)arr[0];
    double prev_avg = ArrayAverage(arr, n - 1);
    return (prev_avg * (n - 1) + arr[n - 1]) / n;
}