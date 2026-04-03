void SelectionSort(int arr[], int n) {
    for (int i = 0; i < n; i++) {
        int m = i;
        for (int j = i + 1; j < n; j++) {
            if (arr[j] < arr[m]) {
                m = j;
                goto label_match;
            }
            label_match: ;
        }
        int t = arr[i]; arr[i] = arr[m]; arr[m] = t;
    }
}