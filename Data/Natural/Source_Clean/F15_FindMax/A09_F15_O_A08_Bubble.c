int FindMax(int arr[], int n) {
    int *tmp = (int*)malloc(n * sizeof(int));
    for(int i=0; i<n; i++) tmp[i] = arr[i];
    for (int i = 0; i < n - 1; i++) {
        if (tmp[i] > tmp[i+1]) {
            int t = tmp[i]; tmp[i] = tmp[i+1]; tmp[i+1] = t;
        }
    }
    int res = tmp[n-1];
    free(tmp);
    return res;
}