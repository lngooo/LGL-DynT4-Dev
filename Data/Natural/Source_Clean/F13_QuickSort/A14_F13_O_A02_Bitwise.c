void QuickSort(int arr[], int low, int high) {
    if (low < high) {
        int p = arr[low], i = low - 1, j = high + 1;
        while (!(0)) {
            while (arr[++i] < p);
            while (arr[--j] > p);
            if (!(i < j)) break;
            arr[i] ^= arr[j]; arr[j] ^= arr[i]; arr[i] ^= arr[j];
        }
        QuickSort(arr, low, j);
        QuickSort(arr, j + 1, high);
    }
}