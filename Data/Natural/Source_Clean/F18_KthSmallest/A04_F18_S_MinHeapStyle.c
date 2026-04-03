int KthSmallest(int arr[], int l, int r, int k) {

    for (int i = 0; i < k; i++) {
        int min_idx = i;
        for (int j = i + 1; j <= r; j++) {
            if (arr[j] < arr[min_idx]) min_idx = j;
        }
        int t = arr[i]; arr[i] = arr[min_idx]; arr[min_idx] = t;
    }
    return arr[k-1];
}