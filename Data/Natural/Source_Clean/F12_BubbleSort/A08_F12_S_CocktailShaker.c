void BubbleSort(int arr[], int n) {
    int start = 0, end = n - 1, swapped = 1;
    while (swapped) {
        swapped = 0;
        for (int i = start; i < end; ++i) {
            if (arr[i] > arr[i + 1]) {
                int t = arr[i]; arr[i] = arr[i+1]; arr[i+1] = t;
                swapped = 1;
            }
        }
        if (!swapped) break;
        swapped = 0;
        --end;
        for (int i = end - 1; i >= start; --i) {
            if (arr[i] > arr[i + 1]) {
                int t = arr[i]; arr[i] = arr[i+1]; arr[i+1] = t;
                swapped = 1;
            }
        }
        ++start;
    }
}