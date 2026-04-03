void InsertionSort(int arr[], int n) {
    int i = 1;
    while (1) {
        if (i >= n) break;
        int k = arr[i], j = i - 1;
        while (1) {
            if (j < 0 || arr[j] <= k) break;
            arr[j+1] = arr[j];
            j--;
        }
        arr[j+1] = k;
        i++;
    }
}