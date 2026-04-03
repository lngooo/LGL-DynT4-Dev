double ArrayAverage(int arr[], int n) {
    double s_even = 0, s_odd = 0;
    for (int i = 0; i < n; i++) {
        if (i % 2 == 0) s_even += arr[i];
        else s_odd += arr[i];
    }
    return (s_even + s_odd) / n;
}