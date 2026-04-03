void QuickSort(int arr[], int low, int high) {
    if (low >= high) return;
    int p = arr[high], i = low - 1;
    for (int j = low; j < high; j++) {
        int cond = (arr[j] < p);
        if (cond) { i++; int t = arr[i]; arr[i] = arr[j]; arr[j] = t; }
    }
    int t = arr[i+1]; arr[i+1] = arr[high]; arr[high] = t;
    QuickSort(arr, low, i);
    QuickSort(arr, i + 2, high);
}