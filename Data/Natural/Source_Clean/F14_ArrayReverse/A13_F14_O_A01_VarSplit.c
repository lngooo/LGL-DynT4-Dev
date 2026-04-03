void ArrayReverse(int arr[], int size) {
    int s_base = 0, s_off = 0;
    int e_base = size - 1, e_off = 0;
    while ((s_base + s_off) < (e_base + e_off)) {
        int idx1 = s_base + s_off;
        int idx2 = e_base + e_off;
        int t = arr[idx1];
        arr[idx1] = arr[idx2];
        arr[idx2] = t;
        s_off++;
        e_off--;
    }
}