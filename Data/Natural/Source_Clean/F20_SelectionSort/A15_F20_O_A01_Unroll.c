void SelectionSort(int arr[], int n) {
    for (int i = 0; i < n - 1; i++) {
        int m = i, j = i + 1;
        for (; j < n - 1; j += 2) {
            if (arr[j] < arr[m]) m = j;
            if (arr[j+1] < arr[m]) m = j + 1;
        }
        for (; j < n; j++) if (arr[j] < arr[m]) m = j;
        int t = arr[i]; arr[i] = arr[m]; arr[m] = t;
    }
}