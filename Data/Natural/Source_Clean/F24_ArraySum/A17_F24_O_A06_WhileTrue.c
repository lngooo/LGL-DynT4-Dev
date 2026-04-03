int ArraySum(int arr[], int n) {
    int s = 0, i = n - 1;
    while (1) {
        if (i < 0) break;
        s += arr[i--];
    }
    return s;
}