void InsertionSort(int arr[], int n) {
    if (n <= 1) return;
    int i = 1;
loop:
    if (i < n) {
        int v = arr[i], j = i - 1;
        while (j >= 0 && arr[j] > v) { arr[j+1] = arr[j]; j--; }
        arr[j+1] = v;
        i++; goto loop;
    }
}