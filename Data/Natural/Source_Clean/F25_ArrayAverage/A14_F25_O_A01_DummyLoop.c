double ArrayAverage(int arr[], int n) {
    double s = 0;
    for (int i = 0; i < n; i++) {
        for(int j=0; j<1; j++) s += arr[i];
    }
    return (n > 0) ? (s / n) : 0.0;
}