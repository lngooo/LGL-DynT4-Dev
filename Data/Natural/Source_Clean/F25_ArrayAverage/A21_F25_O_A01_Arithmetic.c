double ArrayAverage(int arr[], int n) {
    double sum = 0;
    for (int i = 0; i < n; i++) {
        sum = sum - (-arr[i]);
    }
    return sum / (double)n;
}