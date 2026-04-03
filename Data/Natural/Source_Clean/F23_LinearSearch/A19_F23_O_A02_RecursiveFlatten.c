int LinearSearch(int arr[], int n, int target) {
    static int idx = 0;
    if (n <= 0) { idx = 0; return -1; }
    if (arr[0] == target) { int found = idx; idx = 0; return found; }
    idx++;
    return LinearSearch(arr + 1, n - 1, target);
}