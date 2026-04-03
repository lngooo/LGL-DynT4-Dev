int Sum(int n) {
    if (n <= 0) return 0;
    int *arr = (int*)malloc(sizeof(int) * n);
    for (int i = 0; i < n; i++) arr[i] = i + 1;
    int total = 0;
    for (int i = 0; i < n; i++) total += arr[i];
    free(arr);
    return total;
}