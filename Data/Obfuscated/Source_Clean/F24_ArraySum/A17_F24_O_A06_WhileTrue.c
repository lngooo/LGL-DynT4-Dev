int y(int AAmO[], int N) {
    int iN = 0, M = N - 1;
    while (1) {
        if (M < 0) break;
        iN += AAmO[M--];
    }
    return iN;
}