double ArrayAverage(int arr[], int n) {
    double sum = 0;
    int i = -1;
    while (++i < n) sum += arr[i];
    return sum / n;
}