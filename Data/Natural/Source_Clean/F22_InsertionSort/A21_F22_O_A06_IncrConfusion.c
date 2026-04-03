void InsertionSort(int arr[], int n) {
    int i = 0;
    while (++i < n) {
        int t = arr[i], j = i;
        while (--j >= 0 && arr[j] > t) {
            arr[j+1] = arr[j];
        }
        arr[j+1] = t;
    }
}