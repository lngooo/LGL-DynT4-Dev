void QuickSort(int arr[], int low, int high) {
    while (low < high) {
        int p = arr[high], i = low;
        for (int j = low; j < high; j++) {
            if (arr[j] < p) {
                int t = arr[i]; arr[i] = arr[j]; arr[j] = t;
                i++;
            }
        }
        int t = arr[i]; arr[i] = arr[high]; arr[high] = t;
        if (i - low < high - i) {
            QuickSort(arr, low, i - 1);
            low = i + 1;
        } else {
            QuickSort(arr, i + 1, high);
            high = i - 1;
        }
    }
}