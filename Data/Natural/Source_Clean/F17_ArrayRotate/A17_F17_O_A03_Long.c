void ArrayRotate(int arr[], int n, int k) {
    if (n == 0) return;
    long long ln = n, lk = k % n;
    int *t = malloc(lk * sizeof(int));
    for(long long i=0; i<lk; i++) t[i] = *(arr + i);
    for(long long i=0; i<ln-lk; i++) *(arr + i) = *(arr + i + lk);
    for(long long i=0; i<lk; i++) *(arr + ln - lk + i) = t[i];
    free(t);
}