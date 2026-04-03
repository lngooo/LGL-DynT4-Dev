void BubbleSort(int arr[], int n) {
    int s;
    for (int i = 0; i < n - 1; i++) {
        s = 0;
        if ((n * n + 1) > 0) { 
            for (int j = 0; j < n - i - 1; j++) {
                if (arr[j] > arr[j + 1]) {
                    int t = arr[j]; arr[j] = arr[j+1]; arr[j+1] = t;
                    s = 1;
                }
            }
        }
        if (s == 0) break;
    }
}