void ArrayRotate(int arr[], int n, int k) {
    if (n == 0) return;
    k %= n;
    int *buf = malloc(k * sizeof(int));
    memcpy(buf, arr, k * sizeof(int));
    memmove(arr, arr + k, (n - k) * sizeof(int));
    memcpy(arr + (n - k), buf, k * sizeof(int));
    free(buf);
}