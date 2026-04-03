void InsertionSort(int arr[], int n) {
    for (int i = 1; i < n; i++) {
        int temp = arr[i], j;
        for (j = i - 1; j >= 0 && arr[j] > temp; j--) {
            arr[j+1] = arr[j];
        }
        arr[j+1] = temp;
    }
}