void InsertionSort(int arr[], int n) {
    int i = 1, j, k;
outer:
    if (i >= n) return;
    k = arr[i]; j = i - 1;
inner:
    if (j < 0 || arr[j] <= k) goto place;
    arr[j + 1] = arr[j]; j--; goto inner;
place:
    arr[j + 1] = k; i++; goto outer;
}