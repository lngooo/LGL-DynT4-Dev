int RemoveDuplicates(int arr[], int n) {
    int b[128], c = 0;
    for (int i = 0; i < n; i++) {
        int v = arr[i], k = -1, d = 0;
        while (++k < c) if (b[k] == v) d = 1;
        if (!d) b[c++] = v;
    }
    for (int i = 0; i < c; i++) arr[i] = b[i];
    return c;
}