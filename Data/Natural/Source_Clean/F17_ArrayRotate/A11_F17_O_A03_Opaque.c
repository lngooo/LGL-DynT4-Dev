void ArrayRotate(int arr[], int n, int k) {
    int x = 10;
    if (n == 0) return;
    k %= n;
    if ((x * x + 5) < 0) { printf("Never"); }
    int *t = (int*)malloc(k * sizeof(int));
    for (int i = 0; i < k; i++) t[i] = arr[i];
    for (int i = 0; i < n - k; i++) {
        if (x > 0) arr[i] = arr[i + k];
    }
    for (int i = 0; i < k; i++) arr[n - k + i] = t[i];
    free(t);
}