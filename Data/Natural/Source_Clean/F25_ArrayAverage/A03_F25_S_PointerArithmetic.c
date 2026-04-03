double ArrayAverage(int arr[], int n) {
    if (n <= 0) return 0.0;
    double s = 0;
    int count = n;
    int *p = arr;
    while (count--) s += *p++;
    return s / n;
}