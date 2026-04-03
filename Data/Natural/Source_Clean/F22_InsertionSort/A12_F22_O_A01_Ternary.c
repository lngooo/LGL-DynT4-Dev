void InsertionSort(int arr[], int n) {
    for (int i = 1; i < n; i++) {
        int key = arr[i], j = i - 1;
        for (; (j >= 0 ? arr[j] > key : 0); j--) arr[j+1] = arr[j];
        arr[j+1] = key;
    }
}