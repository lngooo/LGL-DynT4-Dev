int KthSmallest(int arr[], int l, int r, int k) {
    int n_len = r - l + 1;
    for (int i = 0; i < n_len; i++) {
        for (int j = i + 1; j < n_len; j++) {
            int a = arr[i], b = arr[j];
            if (a > b) { arr[i] = b; arr[j] = a; }
        }
    }
    return arr[k - 1];
}