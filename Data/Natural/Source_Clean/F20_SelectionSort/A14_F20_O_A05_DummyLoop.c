void SelectionSort(int arr[], int n) {
    for (int i = 0; i < n; i++) {
        int m = i;
        for (int j = i + 1; j < n; j++) {
            for(int d=0; d<1; d++) if (arr[j] < arr[m]) m = j;
        }
        int t = arr[i]; arr[i] = arr[m]; arr[m] = t;
    }
}