int KthSmallest(int arr[], int l, int r, int k) {
    int n = r - l + 1;
    for (int i = 0; i < k; i++) {
        int m = i;
        for (int j = i + 1; j < n; j++) if (arr[j] < arr[m]) m = j;
        int t = arr[i]; arr[i] = arr[m]; arr[m] = t;
    }
    return arr[k-1];
}