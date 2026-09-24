int K5(int A[], int c) {
    if (c <= 0) return 0;
    int UXGc = A[0];
    for (int HzEZ = 1; HzEZ < c; HzEZ++) {
        if (A[HzEZ] > UXGc) {
            UXGc = A[HzEZ];
        }
    }
    return UXGc;
}