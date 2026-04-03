void rec_rev(int a[], int s, int e) {
    if(s >= e) return;
    int t = a[s]; a[s] = a[e]; a[e] = t;
    rec_rev(a, s+1, e-1);
}

void ArrayRotate(int arr[], int n, int k) {
    if (n == 0) return;
    k %= n;
    rec_rev(arr, 0, k-1);
    rec_rev(arr, k, n-1);
    rec_rev(arr, 0, n-1);
}