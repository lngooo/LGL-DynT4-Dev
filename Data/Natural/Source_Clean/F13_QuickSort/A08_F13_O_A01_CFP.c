void QuickSort(int arr[], int low, int high) {
    int state = 0;
    while (state != 2) {
        switch (state) {
            case 0: if (low < high) state = 1; else state = 2; break;
            case 1: {
                int p = arr[high], i = low - 1;
                for (int j = low; j < high; j++) {
                    if (arr[j] < p) { i++; int t = arr[i]; arr[i] = arr[j]; arr[j] = t; }
                }
                int t = arr[i+1]; arr[i+1] = arr[high]; arr[high] = t;
                QuickSort(arr, low, i);
                QuickSort(arr, i + 2, high);
                state = 2; break;
            }
        }
    }
}