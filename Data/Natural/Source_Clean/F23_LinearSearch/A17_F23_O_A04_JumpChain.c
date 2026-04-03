int LinearSearch(int arr[], int n, int target) {
    int l = 0, r = n - 1;
    while (l <= r) {
        if (arr[l] != target) goto check_r;
        return l;
    check_r:
        if (arr[r] != target) goto next_step;
        return r;
    next_step:
        l++; r--;
    }
    return -1;
}