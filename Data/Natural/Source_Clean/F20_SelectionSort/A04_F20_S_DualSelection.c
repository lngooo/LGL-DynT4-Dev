void SelectionSort(int arr[], int n) {
    for (int i = 0, j = n - 1; i < j; i++, j--) {
        int min_v = arr[i], max_v = arr[i];
        int min_i = i, max_i = i;
        for (int k = i; k <= j; k++) {
            if (arr[k] < min_v) { min_v = arr[k]; min_i = k; }
            else if (arr[k] > max_v) { max_v = arr[k]; max_i = k; }
        }
        int t1 = arr[i]; arr[i] = arr[min_i]; arr[min_i] = t1;
        if (max_i == i) max_i = min_i;
        int t2 = arr[j]; arr[j] = arr[max_i]; arr[max_i] = t2;
    }
}