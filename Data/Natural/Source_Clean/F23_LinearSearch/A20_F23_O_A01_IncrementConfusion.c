int LinearSearch(int arr[], int n, int target) {
    int i = -1;
    while (++i < n) {
        if (arr[i] == target) return i;
    }
    return -1;
}