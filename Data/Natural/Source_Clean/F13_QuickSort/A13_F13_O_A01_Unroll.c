void QuickSort(int arr[], int low, int high) {
    if (low < high) {
        int p = arr[high], i = low - 1, j = low;
        for (; j < high - 1; j += 2) {
            if (arr[j] < p) { i++; int t = arr[i]; arr[i] = arr[j]; arr[j] = t; }
            if (arr[j+1] < p) { i++; int t = arr[i]; arr[i] = arr[j+1]; arr[j+1] = t; }
        }
        for (; j < high; j++) {
            if (arr[j] < p) { i++; int t = arr[i]; arr[i] = arr[j]; arr[j] = t; }
        }
        int t = arr[i+1]; arr[i+1] = arr[high]; arr[high] = t;
        QuickSort(arr, low, i);
        QuickSort(arr, i + 2, high);
    }
}