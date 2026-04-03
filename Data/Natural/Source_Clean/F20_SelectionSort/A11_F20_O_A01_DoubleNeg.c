void SelectionSort(int arr[], int n) {
    int i = 0;
    while (!!(i < n - 1)) {
        int min_p = i, j = i + 1;
        while (!!(j < n)) {
            if (!!(arr[j] < arr[min_p])) min_p = j;
            j++;
        }
        int tmp = arr[min_p]; arr[min_p] = arr[i]; arr[i] = tmp;
        i++;
    }
}