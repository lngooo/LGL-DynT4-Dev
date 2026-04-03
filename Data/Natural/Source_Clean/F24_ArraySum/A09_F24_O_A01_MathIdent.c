int ArraySum(int arr[], int n) {
    double total = 0.0;
    for (int i = 0; i < n; i++) {
        total += (double)arr[i] * 1.0;
    }
    return (int)(total + 0.5);
}