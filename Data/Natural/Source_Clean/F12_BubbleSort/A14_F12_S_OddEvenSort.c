void BubbleSort(int arr[], int n) {
    int sorted = 0;
    while (!sorted) {
        sorted = 1;
        for (int i = 1; i < n - 1; i += 2) {
            if (arr[i] > arr[i + 1]) {
                int t = arr[i]; arr[i] = arr[i+1]; arr[i+1] = t;
                sorted = 0;
            }
        }
        for (int i = 0; i < n - 1; i += 2) {
            if (arr[i] > arr[i + 1]) {
                int t = arr[i]; arr[i] = arr[i+1]; arr[i+1] = t;
                sorted = 0;
            }
        }
    }
}