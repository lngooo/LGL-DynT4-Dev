void ArrayRotate(int arr[], int n, int k) {
    if (n == 0) return;
    k = k % n;
    if (k == 0) return;
    int i = k, j = n - k;
    while (i != j) {
        if (i < j) {
            for (int p = 0; p < i; p++) {
                int t = arr[k - i + p];
                arr[k - i + p] = arr[k + j - i + p];
                arr[k + j - i + p] = t;
            }
            j -= i;
        } else {
            for (int p = 0; p < j; p++) {
                int t = arr[k - i + p];
                arr[k - i + p] = arr[k + p];
                arr[k + p] = t;
            }
            i -= j;
        }
    }
    for (int p = 0; p < i; p++) {
        int t = arr[k - i + p];
        arr[k - i + p] = arr[k + p];
        arr[k + p] = t;
    }
}