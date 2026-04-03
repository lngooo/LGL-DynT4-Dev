int cmp(const void *a, const void *b) { return (*(int*)a - *(int*)b); }

int FindMax(int arr[], int n) {
    if (n <= 0) return 0;
    int *tmp = (int*)malloc(n * sizeof(int));
    for(int i=0; i<n; i++) tmp[i] = arr[i];
    qsort(tmp, n, sizeof(int), cmp);
    int res = tmp[n-1];
    free(tmp);
    return res;
}