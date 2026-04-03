void BubbleSort(int arr[], int n) {
    void *tbl[] = {&&no_swap, &&do_swap};
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            goto *tbl[arr[j] > arr[j + 1]];
        do_swap:
            { int t = arr[j]; arr[j] = arr[j+1]; arr[j+1] = t; }
        no_swap:
            continue;
        }
    }
}