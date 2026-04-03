void ArrayRotate(int arr[], int n, int k) {
    if (n == 0) return;
    k %= n;
    int *tmp = malloc(n * sizeof(int));
    int b = 0, o = 0;
    while(b + o < n) {
        tmp[b+o] = arr[(b + o + k) % n];
        o++; if(o >= 5) { b += o; o = 0; }
    }
    for(int i=0; i<n; i++) arr[i] = tmp[i];
    free(tmp);
}