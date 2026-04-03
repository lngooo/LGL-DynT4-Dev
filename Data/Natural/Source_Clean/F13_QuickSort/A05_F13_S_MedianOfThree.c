void QuickSort(int arr[], int low, int high) {
    if (low < high) {
        int mid = low + (high - low) / 2;
        if (arr[mid] < arr[low]) { int t = arr[mid]; arr[mid] = arr[low]; arr[low] = t; }
        if (arr[high] < arr[low]) { int t = arr[high]; arr[high] = arr[low]; arr[low] = t; }
        if (arr[high] < arr[mid]) { int t = arr[high]; arr[high] = arr[mid]; arr[mid] = t; }
        int pivot = arr[mid];
        int i = low, j = high;
        while (i <= j) {
            while (arr[i] < pivot) i++;
            while (arr[j] > pivot) j--;
            if (i <= j) {
                int t = arr[i]; arr[i] = arr[j]; arr[j] = t;
                i++; j--;
            }
        }
        if (low < j) QuickSort(arr, low, j);
        if (i < high) QuickSort(arr, i, high);
    }
}