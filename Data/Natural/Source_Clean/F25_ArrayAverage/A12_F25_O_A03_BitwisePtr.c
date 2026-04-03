double ArrayAverage(int arr[], int n) {
    double s = 0;
    for (int i = 0; i < (n & 0x7FFFFFFF); i++) {
        s += *(arr + i);
    }
    return s / (double)n;
}