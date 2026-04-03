void swap(int arr[], int fi, int si, int d) {
    for (int i = 0; i < d; i++) {
        int temp = arr[fi + i];
        arr[fi + i] = arr[si + i];
        arr[si + i] = temp;
    }
}

void block_rotate(int arr[], int k, int n) {
    if (k == 0 || k == n) return;
    if (n - k == k) {
        swap(arr, 0, n - k, k);
        return;
    }
    if (k < n - k) {
        swap(arr, 0, n - k, k);
        block_rotate(arr, k, n - k);
    } else {
        swap(arr, 0, k, n - k);
        block_rotate(arr + n - k, 2 * k - n, k);
    }
}

void ArrayRotate(int arr[], int n, int k) {
    if (n == 0) return;
    block_rotate(arr, k % n, n);
}