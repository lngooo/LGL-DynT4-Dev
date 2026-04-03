void SelectionSort(int arr[], int n) {
    int i = 0, j, m;
outer:
    if (i >= n - 1) return;
    m = i; j = i + 1;
inner:
    if (j >= n) goto swap;
    if (arr[j] < arr[m]) m = j;
    j++; goto inner;
swap:
    { int t = arr[m]; arr[m] = arr[i]; arr[i] = t; }
    i++; goto outer;
}