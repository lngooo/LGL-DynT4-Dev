void SelectionSort(int arr[], int n) {
    int i, j;
    for (i = 0; i < n; i++) {
        int curr_min = arr[i];
        int target_pos = i;
        for (j = i + 1; j < n; j++) {
            if (arr[j] < curr_min) {
                curr_min = arr[j];
                target_pos = j;
            }
        }
        arr[target_pos] = arr[i];
        arr[i] = curr_min;
    }
}