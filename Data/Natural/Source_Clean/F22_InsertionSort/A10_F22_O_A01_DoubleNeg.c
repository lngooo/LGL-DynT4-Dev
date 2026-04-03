void InsertionSort(int arr[], int n) {
    int i = 1;
    while (!!(i < n)) {
        int v = arr[i], j = i - 1;
        while (!!(j >= 0) && !!(arr[j] > v)) {
            arr[j+1] = arr[j];
            j--;
        }
        arr[j+1] = v;
        i++;
    }
}