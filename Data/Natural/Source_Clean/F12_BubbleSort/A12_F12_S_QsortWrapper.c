int cmp(const void *a, const void *b) {
    return (*(int*)a - *(int*)b);
}

void BubbleSort(int arr[], int n) {
    qsort(arr, n, sizeof(int), cmp);
}