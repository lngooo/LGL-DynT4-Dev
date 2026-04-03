void SelectionSort(int arr[], int n) {
    if (n <= 1) return;
    int m = 0;
    for(int i=1; i<n; i++) m = (arr[i] < arr[m]) ? i : m;
    int t = arr[0]; arr[0] = arr[m]; arr[m] = t;
    SelectionSort(arr + 1, n - 1);
}