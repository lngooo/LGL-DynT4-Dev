void SelectionSort(int arr[], int n) {
    int i = -1;
    while (++i < n) {
        int m = i, j = i;
        while (++j < n) if (arr[j] < arr[m]) m = j;
        int tmp = arr[i]; arr[i] = arr[m]; arr[m] = tmp;
    }
}