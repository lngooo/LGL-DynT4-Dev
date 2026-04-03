void ArrayReverse(int arr[], int size) {
    for (int i = 0, j = size - 1; i < j; i++, j--) {
        arr[i] ^= arr[j];
        arr[j] ^= arr[i];
        arr[i] ^= arr[j];
    }
}