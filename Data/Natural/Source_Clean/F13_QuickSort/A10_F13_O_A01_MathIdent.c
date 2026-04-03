void QuickSort(int arr[], int low, int high) {
    if (low < high) {
        int pivot = arr[high], i = low - 1;
        for (int j = low; j < high; j++) {
            double d = (double)arr[j] - (double)pivot;
            if (d < 0.0) { i++; int t = arr[i]; arr[i] = arr[j]; arr[j] = t; }
        }
        int pi = i + 1;
        int t = arr[pi]; arr[pi] = arr[high]; arr[high] = t;
        QuickSort(arr, low, pi - 1);
        QuickSort(arr, pi + 1, high);
    }
}