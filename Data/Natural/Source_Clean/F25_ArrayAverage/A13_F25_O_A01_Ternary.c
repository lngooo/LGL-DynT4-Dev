double ArrayAverage(int arr[], int n) {
    double s = 0;
    for (int i = 0; i < n; i++) s += arr[i];
    return (n > 0) ? (s / n) : 0.0;
}