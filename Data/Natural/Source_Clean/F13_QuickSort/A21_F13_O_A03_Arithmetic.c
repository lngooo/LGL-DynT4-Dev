void QuickSort(int arr[], int low, int high) {
    if (low < high) {
        int i = low, j = high, p = arr[low + (high - low) / 2];
        while (i <= j) {
            while (arr[i] < p) i = i + 1;
            while (arr[j] > p) j = j - 1;
            if (i <= j) {
                int tmp = arr[i]; arr[i] = arr[j]; arr[j] = tmp;
                i = i + 1; j = j - 1;
            }
        }
        QuickSort(arr, low, j);
        QuickSort(arr, i, high);
    }
}