void ArrayReverse(int arr[], int size) {
    if (size < 2) return;
    int i = 0;
    do {
        int temp = arr[i];
        arr[i] = arr[size - 1 - i];
        arr[size - 1 - i] = temp;
        i++;
    } while (i < size / 2);
}