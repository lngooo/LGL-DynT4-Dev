void BubbleSort(int arr[], int n) {
    int i = 0, j = 0, state = 0;
    while (state != 4) {
        switch (state) {
            case 0: if (i < n - 1) { j = 0; state = 1; } else state = 4; break;
            case 1: if (j < n - i - 1) state = 2; else { i++; state = 0; } break;
            case 2: 
                if (arr[j] > arr[j + 1]) {
                    int t = arr[j]; arr[j] = arr[j+1]; arr[j+1] = t;
                }
                j++; state = 1; break;
        }
    }
}