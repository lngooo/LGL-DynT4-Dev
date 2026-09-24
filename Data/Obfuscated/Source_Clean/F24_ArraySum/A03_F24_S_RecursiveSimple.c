int iQ(int Y9d[], int t) {
    if (t <= 0) return 0;
    return Y9d[t-1] + iQ(Y9d, t-1);
}