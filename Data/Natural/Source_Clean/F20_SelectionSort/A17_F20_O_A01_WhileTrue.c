void SelectionSort(int arr[], int n) {
    int i = 0;
    while (1) {
        if (i >= n) break;
        int low = i;
        for(int j = i + 1; j < n; j++) if(arr[j] < arr[low]) low = j;
        int t = arr[i]; arr[i] = arr[low]; arr[low] = t;
        i++;
    }
}