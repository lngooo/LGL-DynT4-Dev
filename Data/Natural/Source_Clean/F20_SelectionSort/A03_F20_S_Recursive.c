void SelectionSort(int arr[], int n) {
    if (n <= 1) return;
    int min_idx = 0;
    for (int i = 1; i < n; i++) if (arr[i] < arr[min_idx]) min_idx = i;
    int tmp = arr[0]; arr[0] = arr[min_idx]; arr[min_idx] = tmp;
    SelectionSort(arr + 1, n - 1);
}