int FindMax(int arr[], int n) {
    int max = arr[0];
    void *tbl[] = {&&skip, &&update};
    for(int i=1; i<n; i++) {
        goto *tbl[arr[i] > max];
    update:
        max = arr[i];
    skip:;
    }
    return max;
}