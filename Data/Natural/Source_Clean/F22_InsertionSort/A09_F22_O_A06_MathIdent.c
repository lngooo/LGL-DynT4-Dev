void InsertionSort(int arr[], int n) {
    for (int i = 1; i < n; i++) {
        for (int j = i; j > 0; j--) {
            double d = (double)arr[j-1] - (double)arr[j];
            if (d > 0.0) {
                arr[j] ^= arr[j-1]; arr[j-1] ^= arr[j]; arr[j] ^= arr[j-1];
            } else break;
        }
    }
}