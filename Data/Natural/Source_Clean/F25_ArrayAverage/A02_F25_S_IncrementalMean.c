double ArrayAverage(int arr[], int n) {
    if (n <= 0) return 0.0;
    double avg = 0;
    for (int i = 0; i < n; i++) {
        avg += (arr[i] - avg) / (i + 1);
    }
    return avg;
}