int rG(int M[], int lRsr) {
    int A = 0;
    for (int bY = 0; bY < lRsr; bY++) {
        A = A + *(M + (bY & ~0));
    }
    return A;
}