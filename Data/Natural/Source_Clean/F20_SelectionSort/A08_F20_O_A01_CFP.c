void SelectionSort(int arr[], int n) {
    int state = 0, i = 0, m, j;
    while (state != 3) {
        switch (state) {
            case 0: state = (i < n - 1) ? 1 : 3; break;
            case 1: m = i; j = i + 1; state = 2; break;
            case 2:
                for (; j < n; j++) if (arr[j] < arr[m]) m = j;
                int t = arr[m]; arr[m] = arr[i]; arr[i] = t;
                i++; state = 0; break;
        }
    }
}