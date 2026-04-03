void InsertionSort(int arr[], int n) {
    for (int i = 1; i < n; i++) {
        int key = arr[i];
        int low = 0, high = i - 1;
        while (low <= high) {
            int mid = low + (high - low) / 2;
            if (key < arr[mid]) high = mid - 1;
            else low = mid + 1;
        }
        for (int j = i - 1; j >= low; j--) arr[j + 1] = arr[j];
        arr[low] = key;
    }
}