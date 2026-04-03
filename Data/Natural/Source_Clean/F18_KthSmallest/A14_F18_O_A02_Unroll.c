int KthSmallest(int arr[], int l, int r, int k) {
    while (l <= r) {
        int p = arr[r], i = l, j = l;
        for (; j < r - 1; j += 2) {
            if (arr[j] <= p) { int t=arr[i]; arr[i]=arr[j]; arr[j]=t; i++; }
            if (arr[j+1] <= p) { int t=arr[i]; arr[i]=arr[j+1]; arr[j+1]=t; i++; }
        }
        for (; j < r; j++) if (arr[j] <= p) { int t=arr[i]; arr[i]=arr[j]; arr[j]=t; i++; }
        int t=arr[i]; arr[i]=arr[r]; arr[r]=t;
        if (i == k - 1) return arr[i];
        if (i > k - 1) r = i - 1; else l = i + 1;
    }
    return -1;
}