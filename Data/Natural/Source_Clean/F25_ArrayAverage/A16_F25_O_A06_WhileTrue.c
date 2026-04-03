double ArrayAverage(int arr[], int n) {
    double s = 0; int i = n;
    while (1) {
        if (--i < 0) break;
        s += arr[i];
    }
    return s / n;
}