void BubbleSort(int arr[], int n) {
    for (int i = 0; i < n; i++) {
        int j = 0;
        for (; j < n - i - 2; j += 2) {
            if (arr[j] > arr[j + 1]) { int t = arr[j]; arr[j] = arr[j+1]; arr[j+1] = t; }
            if (arr[j+1] > arr[j + 2]) { int t = arr[j+1]; arr[j+1] = arr[j+2]; arr[j+2] = t; }
        }
        for (; j < n - i - 1; j++) {
            if (arr[j] > arr[j+1]) { int t = arr[j]; arr[j] = arr[j+1]; arr[j+1] = t; }
        }
    }
}