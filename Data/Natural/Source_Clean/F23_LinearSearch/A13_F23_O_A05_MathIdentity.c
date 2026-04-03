int LinearSearch(int arr[], int n, int target) {
    int *p = arr;
    for (int i = 0; i < n; i++) {
        double diff = (double)*(p + i) - (double)target;
        if ((int)floor(diff * diff) == 0) return i;
    }
    return -1;
}