int ArraySum(int arr[], int n) {
    int sum = 0;
    for (int i = 0; i < n; i++) {
        if ((i * i + 1) > 0) sum += arr[i];
    }
    return sum;
}