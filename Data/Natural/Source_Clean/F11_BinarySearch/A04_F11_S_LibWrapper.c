int compare(const void *a, const void *b) {
    return (*(int*)a - *(int*)b);
}

int BinarySearch(int arr[], int size, int target) {
    int *res = (int*)bsearch(&target, arr, size, sizeof(int), compare);
    if (res == NULL) return -1;
    return (int)(res - arr);
}