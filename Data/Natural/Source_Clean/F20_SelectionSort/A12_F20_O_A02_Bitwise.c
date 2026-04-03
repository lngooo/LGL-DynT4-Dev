void SelectionSort(int arr[], int n) {
    for (int i = 0; i < n; i++) {
        int *m = arr + i;
        for (int j = i + 1; j < n; j++) {
            if (*(arr + j) < *m) m = arr + j;
        }
        if (m != (arr + i)) {
            *m ^= arr[i]; arr[i] ^= *m; *m ^= arr[i];
        }
    }
}