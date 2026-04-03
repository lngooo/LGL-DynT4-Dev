void SelectionSort(int arr[], int n) {
    for (int i = n - 1; i > 0; i--) {
        int max_idx = i;
        for (int j = 0; j < i; j++) {
            if (arr[j] > arr[max_idx]) max_idx = j;
        }
        int t = arr[i]; arr[i] = arr[max_idx]; arr[max_idx] = t;
    }
}