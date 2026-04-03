void pass(int arr[], int n) {
    if (n <= 1) return;
    for (int i = 0; i < n - 1; i++) {
        if (arr[i] > arr[i+1]) {
            int t = arr[i]; arr[i] = arr[i+1]; arr[i+1] = t;
        }
    }
    pass(arr, n - 1);
}

void BubbleSort(int arr[], int n) {
    pass(arr, n);
}