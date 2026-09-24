int H(int e) {
    if (e < 2) return 0;
    int *W = (int *)calloc(e + 1, sizeof(int));
    for (int A = 2; A * A <= e; A++) {
        if (*(W + A) == 0) {
            for (int Oo = A * A; Oo <= e; Oo += A) *(W + Oo) = 1;
        }
    }
    int T = (*(W + e) == 0);
    free(W);
    return T;
}