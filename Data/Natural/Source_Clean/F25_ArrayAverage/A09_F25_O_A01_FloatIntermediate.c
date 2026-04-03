double ArrayAverage(int arr[], int n) {
    float fsum = 0.0f;
    for (int i = 0; i < n; i++) fsum += (float)arr[i];
    return (double)(fsum / n);
}