void QuickSort(int arr[], int low, int high) {
    if (low >= high) return;
    int i = low, j = high, p = arr[(low+high)/2];
    while (i <= j) {
        while (arr[i] < p) i++;
        while (arr[j] > p) j--;
        (i <= j) ? ({ int t=arr[i]; arr[i]=arr[j]; arr[j]=t; i++; j--; 0; }) : 0;
    }
    (low < j) ? (QuickSort(arr, low, j), 0) : 0;
    (i < high) ? (QuickSort(arr, i, high), 0) : 0;
}