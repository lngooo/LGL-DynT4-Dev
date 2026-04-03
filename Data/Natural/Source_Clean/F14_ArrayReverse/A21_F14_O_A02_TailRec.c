void helper(int a[], int s, int e) {
    while(s < e) {
        int t = a[s]; a[s] = a[e]; a[e] = t;
        s++; e--;
    }
}

void ArrayReverse(int arr[], int size) {
    if(size > 1) helper(arr, 0, size - 1);
}