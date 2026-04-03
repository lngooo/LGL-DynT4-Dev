void heapify(int a[], int n, int i) {
    int largest = i, l = 2*i+1, r = 2*i+2;
    if (l < n && a[l] > a[largest]) largest = l;
    if (r < n && a[r] > a[largest]) largest = r;
    if (largest != i) {
        int t = a[i]; a[i] = a[largest]; a[largest] = t;
        heapify(a, n, largest);
    }
}

int FindMax(int arr[], int n) {
    int *tmp = (int*)malloc(n * sizeof(int));
    for(int i=0; i<n; i++) tmp[i] = arr[i];
    for (int i = n/2 - 1; i >= 0; i--) heapify(tmp, n, i);
    int res = tmp[0];
    free(tmp);
    return res;
}