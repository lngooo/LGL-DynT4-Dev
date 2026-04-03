void QuickSort(int arr[], int low, int high) {
    int i = low, j = high, p = arr[(low+high)/2];
    do {
        while (arr[i] < p) i++;
        while (arr[j] > p) j--;
        if (i <= j) {
            int t = arr[i]; arr[i] = arr[j]; arr[j] = t;
            i++; j--;
        }
    } while (i <= j);
    if (low < j) QuickSort(arr, low, j);
    if (i < high) QuickSort(arr, i, high);
}