int ArraySum(int arr[], int n) {
    int total = 0;
    for (int i = 0; i < n; i++) {
        total = total + *(arr + (i & ~0));
    }
    return total;
}