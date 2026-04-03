void QuickSort(int arr[], int low, int high) {
    if (low >= high) return;
    int p = arr[low], i = low - 1, j = high + 1;
    while (1) {
        while (1) { i++; if (arr[i] >= p) break; }
        while (1) { j--; if (arr[j] <= p) break; }
        if (i >= j) break;
        int t = arr[i]; arr[i] = arr[j]; arr[j] = t;
    }
    QuickSort(arr, low, j);
    QuickSort(arr, j + 1, high);
}