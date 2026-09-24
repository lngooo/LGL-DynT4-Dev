void QuickSort(int arr[], int low, int high) {
    int state = 0;
    int p = 0;
    int i = 0;
    int j = 0;
    int t = 0;
    while (1) {
        switch (state) {
            case 0:
                if (low >= high) return;
                p = arr[high];
                i = low - 1;
                j = low;
                state = 1;
                break;
            case 1:
                if (j >= high) {
                    state = 3;
                } else {
                    state = (arr[j] < p) ? 2 : 4;
                }
                break;
            case 2:
                i++;
                t = arr[i];
                arr[i] = arr[j];
                arr[j] = t;
                state = 4;
                break;
            case 3:
                t = arr[i + 1];
                arr[i + 1] = arr[high];
                arr[high] = t;
                QuickSort(arr, low, i);
                QuickSort(arr, i + 2, high);
                return;
            case 4:
                j++;
                state = 1;
                break;
            default:
                return;
        }
    }
}