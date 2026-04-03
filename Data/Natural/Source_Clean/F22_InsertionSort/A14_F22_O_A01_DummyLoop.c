void InsertionSort(int arr[], int n) {
    for (int i = 1; i < n; i++) {
        int k = arr[i], j = i - 1;
        for (int d = 0; d < 1; d++) {
            while (j >= 0 && arr[j] > k) { arr[j+1] = arr[j]; j--; }
        }
        arr[j+1] = k;
    }
}