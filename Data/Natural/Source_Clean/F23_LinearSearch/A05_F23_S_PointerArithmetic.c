int LinearSearch(int arr[], int n, int target) {
    int *ptr = arr;
    for (int i = 0; i < n; i++) {
        if (*(ptr + i) == target) return i;
    }
    return -1;
}