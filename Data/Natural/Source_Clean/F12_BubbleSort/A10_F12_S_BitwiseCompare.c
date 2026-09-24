void BubbleSort(int arr[], int n) {
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            int diff = arr[j] - arr[j + 1];
            int gt = (diff != 0) & ((((unsigned int)diff) >> 31) ^ 1U);
            int mask = -gt;
            int x = (arr[j] ^ arr[j + 1]) & mask;
            arr[j] ^= x;
            arr[j + 1] ^= x;
        }
    }
}