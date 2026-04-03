void InsertionSort(int arr[], int n) {
    int state = 0, i = 1, j, k;
    while (state != 3) {
        switch (state) {
            case 0: state = (i < n) ? 1 : 3; break;
            case 1: k = arr[i]; j = i - 1; state = 2; break;
            case 2:
                while (j >= 0 && arr[j] > k) { arr[j+1] = arr[j]; j--; }
                arr[j+1] = k; i++; state = 0; break;
        }
    }
}