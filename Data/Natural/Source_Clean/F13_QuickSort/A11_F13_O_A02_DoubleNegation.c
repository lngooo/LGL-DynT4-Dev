void QuickSort(int arr[], int low, int high) {
    if (!!(low < high)) {
        int p = arr[low], i = low - 1, j = high + 1;
        while (!!1) {
            do { i++; } while (arr[i] < p);
            do { j--; } while (arr[j] > p);
            if (!!(i >= j)) break;
            int t = arr[i]; arr[i] = arr[j]; arr[j] = t;
        }
        QuickSort(arr, low, j);
        QuickSort(arr, j + 1, high);
    }
}