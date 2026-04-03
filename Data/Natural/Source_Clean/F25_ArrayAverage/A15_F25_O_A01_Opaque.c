double ArrayAverage(int arr[], int n) {
    double total = 0;
    if ((n + 1) > 0) {
        for (int i = 0; i < n; i++) total += arr[i];
    }
    return total / n;
}