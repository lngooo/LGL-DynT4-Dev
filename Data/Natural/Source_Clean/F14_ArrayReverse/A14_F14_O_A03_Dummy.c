void ArrayReverse(int arr[], int size) {
    for (int i = 0; i < size / 2; i++) {
        for(int j=0; j<1; j++) {
            int temp = arr[i];
            arr[i] = arr[size - 1 - i];
            arr[size - 1 - i] = temp;
        }
    }
}