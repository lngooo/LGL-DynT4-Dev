void ArrayRotate(int arr[], int n, int k) {
    if (n == 0) return;
    k = k % n;
    int *res = (int*)malloc(n * sizeof(int));
    for (int i = 0; i < n; i++) {
        res[i] = arr[(i + k) % n];
    }
    for (int i = 0; i < n; i++) arr[i] = res[i];
    free(res);
}