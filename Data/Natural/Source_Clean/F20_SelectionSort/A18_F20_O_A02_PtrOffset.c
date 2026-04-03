void SelectionSort(int arr[], int n) {
    for (int i = 0; i < n; i++) {
        int *base = arr + i;
        int *walker = base + 1;
        int *min_ptr = base;
        while (walker < arr + n) {
            if (*walker < *min_ptr) min_ptr = walker;
            walker++;
        }
        int val = *base; *base = *min_ptr; *min_ptr = val;
    }
}