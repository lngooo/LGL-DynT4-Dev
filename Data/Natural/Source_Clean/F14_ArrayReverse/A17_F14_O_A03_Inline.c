void ArrayReverse(int arr[], int size) {
    for (int i = 0; i < (size >> 1); i++) {
        arr[i] += arr[size - 1 - i];
        arr[size - 1 - i] = arr[i] - arr[size - 1 - i];
        arr[i] = arr[i] - arr[size - 1 - i];
    }
}