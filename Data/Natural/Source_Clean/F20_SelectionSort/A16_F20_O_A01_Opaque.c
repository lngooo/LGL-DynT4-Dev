void SelectionSort(int arr[], int n) {
    for (int i = 0; i < n; i++) {
        if ((i * i + 1) > 0) {
            int target = i;
            for (int j = i + 1; j < n; j++) if (arr[j] < arr[target]) target = j;
            int tmp = arr[i]; arr[i] = arr[target]; arr[target] = tmp;
        }
    }
}