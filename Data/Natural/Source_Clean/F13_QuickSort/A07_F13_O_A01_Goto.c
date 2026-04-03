void QuickSort(int arr[], int low, int high) {
    if (low >= high) goto end;
    int p = arr[high], i = low - 1, j = low;
loop:
    if (j >= high) goto done;
    if (arr[j] >= p) goto skip;
    i++;
    { int t = arr[i]; arr[i] = arr[j]; arr[j] = t; }
skip:
    j++; goto loop;
done:
    { int t = arr[i+1]; arr[i+1] = arr[high]; arr[high] = t; }
    QuickSort(arr, low, i);
    QuickSort(arr, i + 2, high);
end:;
}