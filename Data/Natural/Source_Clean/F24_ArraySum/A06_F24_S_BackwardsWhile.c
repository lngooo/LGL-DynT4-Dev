int ArraySum(int arr[], int n) {
    int total = 0;
    int idx = n - 1;
    while (idx >= 0) {
        total += arr[idx];
        idx--;
    }
    return total;
}