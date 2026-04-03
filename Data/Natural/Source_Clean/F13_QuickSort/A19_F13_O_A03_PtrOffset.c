void QuickSort(int arr[], int low, int high) {
    if (low >= high) return;
    int p = *(arr + (low + high) / 2), i = low, j = high;
    while (i <= j) {
        while (*(arr + i) < p) i++;
        while (*(arr + j) > p) j--;
        if (i <= j) {
            int t = *(arr + i); *(arr + i) = *(arr + j); *(arr + j) = t;
            i++; j--;
        }
    }
    if (low < j) QuickSort(arr, low, j);
    if (i < high) QuickSort(arr, i, high);
}