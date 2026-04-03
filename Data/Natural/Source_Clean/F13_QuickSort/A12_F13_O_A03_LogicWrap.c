void QuickSort(int arr[], int low, int high) {
    if (low >= high) return;
    int i = low, j = high, p = arr[(low+high)/2];
    for (; i <= j; ) {
        for (; arr[i] < p; ) i++;
        for (; arr[j] > p; ) j--;
        if (i <= j) { int t = arr[i]; arr[i] = arr[j]; arr[j] = t; i++; j--; }
    }
    if (low < j) QuickSort(arr, low, j);
    if (i < high) QuickSort(arr, i, high);
}