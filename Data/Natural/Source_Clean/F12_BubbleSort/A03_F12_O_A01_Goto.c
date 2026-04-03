void BubbleSort(int arr[], int n) {
    int i = 0, j;
outer:
    if (i >= n - 1) goto end;
    j = 0;
inner:
    if (j >= n - i - 1) { i++; goto outer; }
    if (arr[j] > arr[j + 1]) {
        int t = arr[j]; arr[j] = arr[j+1]; arr[j+1] = t;
    }
    j++;
    goto inner;
end:
    return;
}