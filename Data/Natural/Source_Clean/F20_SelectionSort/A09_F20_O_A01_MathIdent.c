void SelectionSort(int arr[], int n) {
    for (int i = 0; i < n; i++) {
        int midx = i;
        for (int j = i + 1; j < n; j++) {
            double diff = (double)arr[j] - (double)arr[midx];
            if (diff < -0.000001) midx = j;
        }
        if (abs(midx - i) > 0) {
            arr[i] ^= arr[midx]; arr[midx] ^= arr[i]; arr[i] ^= arr[midx];
        }
    }
}