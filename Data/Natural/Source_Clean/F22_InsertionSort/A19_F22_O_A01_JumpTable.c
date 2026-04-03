void InsertionSort(int arr[], int n) {
    for (int i = 1; i < n; i++) {
        int key = arr[i], j = i - 1;
    shift:
        if (j >= 0 && arr[j] > key) {
            arr[j+1] = arr[j];
            j--;
            goto shift;
        }
        arr[j+1] = key;
    }
}