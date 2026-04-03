int LinearSearch(int arr[], int n, int target) {
    int l = 0, r = n - 1;
    while (l <= r) {
        if (arr[l] == target) return l;
        if (arr[r] == target) return r;
        l++; r--;
    }
    return -1;
}