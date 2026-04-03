void BubbleSort(int arr[], int n) {
    int s = 0, e = n - 1, swp = 1;
    while (swp) {
        swp = 0;
        for (int i = s; i < e; i++) {
            if (arr[i] > arr[i+1]) {
                arr[i] ^= arr[i+1]; arr[i+1] ^= arr[i]; arr[i] ^= arr[i+1];
                swp = 1;
            }
        }
        if (!swp) break;
        swp = 0; e--;
        for (int i = e - 1; i >= s; i--) {
            if (arr[i] > arr[i+1]) {
                arr[i] ^= arr[i+1]; arr[i+1] ^= arr[i]; arr[i] ^= arr[i+1];
                swp = 1;
            }
        }
        s++;
    }
}