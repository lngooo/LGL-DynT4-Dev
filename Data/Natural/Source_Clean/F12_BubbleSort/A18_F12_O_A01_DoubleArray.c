void BubbleSort(int arr[], int n) {
    int *tmp = (int*)malloc(n * sizeof(int));
    memcpy(tmp, arr, n * sizeof(int));
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            if (tmp[j] > tmp[j+1]) {
                int t = tmp[j]; tmp[j] = tmp[j+1]; tmp[j+1] = t;
            }
        }
    }
    memcpy(arr, tmp, n * sizeof(int));
    free(tmp);
}