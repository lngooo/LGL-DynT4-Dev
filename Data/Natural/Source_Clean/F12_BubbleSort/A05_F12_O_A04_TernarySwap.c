void BubbleSort(int arr[], int n) {
    if (n <= 1) return;
    for (int i = 0; i < n - 1; i++) {
        (arr[i] > arr[i+1]) ? ({int t=arr[i]; arr[i]=arr[i+1]; arr[i+1]=t; 0;}) : 0;
    }
    BubbleSort(arr, n - 1);
}