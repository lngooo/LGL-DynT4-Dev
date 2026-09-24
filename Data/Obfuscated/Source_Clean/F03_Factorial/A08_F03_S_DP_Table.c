long long ym(int er) {
    if (er < 0) return 0;
    if (er == 0) return 1;
    long long *v7YG = (long long *)malloc((er + 1) * sizeof(long long));
    v7YG[0] = 1;
    for (int asU = 1; asU <= er; asU++) {
        v7YG[asU] = v7YG[asU - 1] * asU;
    }
    long long LLQ = v7YG[er];
    free(v7YG);
    return LLQ;
}