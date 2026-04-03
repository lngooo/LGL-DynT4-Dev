void rotateOne(int arr[], int n) {
    int temp = arr[0], i;
    for (i = 0; i < n - 1; i++) arr[i] = arr[i + 1];
    arr[n - 1] = temp;
}

void ArrayRotate(int arr[], int n, int k) {
    if (n == 0) return;
    k = k % n;
    for (int i = 0; i < k; i++) rotateOne(arr, n);
}