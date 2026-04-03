void QuickSort(int arr[], int low, int high) {
    if (low < high) {
        int pivot = arr[low];
        int i = low - 1, j = high + 1;
        while (1) {
            do { i++; } while (arr[i] < pivot);
            do { j--; } while (arr[j] > pivot);
            if (i >= j) break;
            int temp = arr[i]; arr[i] = arr[j]; arr[j] = temp;
        }
        QuickSort(arr, low, j);
        QuickSort(arr, j + 1, high);
    }
}