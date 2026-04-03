int FindMax(int arr[], int n) {
    int *h = (int*)malloc(n * sizeof(int));
    for(int i=0; i<n; i++) h[i] = arr[i];
    for (int i = 1; i < n; i++) {
        int c = i;
        while (c > 0) {
            int p = (c - 1) / 2;
            if (h[c] > h[p]) { int t = h[c]; h[c] = h[p]; h[p] = t; c = p; }
            else break;
        }
    }
    int res = h[0];
    free(h);
    return res;
}