void dc_rev(int arr[], int n) {
    if (n <= 1) return;
    for (int i = 0; i < n / 2; i++) {
        int t = arr[i];
        arr[i] = arr[n - 1 - i];
        arr[n - 1 - i] = t;
    }

}

void ArrayReverse(int arr[], int size) {
    dc_rev(arr, size);
}