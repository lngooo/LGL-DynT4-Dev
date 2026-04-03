void BubbleSort(int arr[], int n) {
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            switch (arr[j] > arr[j + 1]) {
                case 1: { int t = arr[j]; arr[j] = arr[j+1]; arr[j+1] = t; break; }
                default: break;
            }
        }
    }
}