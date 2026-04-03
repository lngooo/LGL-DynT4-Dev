void InsertionSort(int arr[], int n) {
    int start = 1;
    while (start < n) {
        int target = arr[start];
        int l = 0, r = start - 1;
        while (l <= r) {
            int m = (l + r) / 2;
            if (arr[m] > target) r = m - 1;
            else l = m + 1;
        }
        for (int k = start - 1; k >= l; k--) arr[k+1] = arr[k];
        arr[l] = target;
        start++;
    }
}