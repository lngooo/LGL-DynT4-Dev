double ArrayAverage(int arr[], int n) {
    if (n <= 0) return 0.0;
    double s = 0;
    int i = 0;
    for (; i <= n - 2; i += 2) s += (arr[i] + arr[i+1]);
    if (i < n) s += arr[i];
    return s / n;
}