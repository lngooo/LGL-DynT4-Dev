void QuickSort(int arr[], int low, int high) {
    if (low >= high) return;
    int *piv_ptr = arr + high;
    int *left = arr + low;
    for (int *curr = arr + low; curr < piv_ptr; curr++) {
        if (*curr < *piv_ptr) {
            int tmp = *curr; *curr = *left; *left = tmp;
            left++;
        }
    }
    int tmp = *left; *left = *piv_ptr; *piv_ptr = tmp;
    QuickSort(arr, low, (int)(left - arr) - 1);
    QuickSort(arr, (int)(left - arr) + 1, high);
}