double ArrayAverage(int arr[], int n) {
    if (n <= 0) return 0.0;
    double total = 0;
    for (int i = n - 1; i >= 0; i--) total += arr[i];
    return total / (double)n;
}