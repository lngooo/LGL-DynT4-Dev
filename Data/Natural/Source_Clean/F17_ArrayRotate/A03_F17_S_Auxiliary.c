void ArrayRotate(int arr[], int n, int k) {
    if (n == 0) return;
    k = k % n;
    int *temp = (int*)malloc(k * sizeof(int));
    for (int i = 0; i < k; i++) temp[i] = arr[i];
    for (int i = 0; i < n - k; i++) arr[i] = arr[i + k];
    for (int i = 0; i < k; i++) arr[n - k + i] = temp[i];
    free(temp);
}