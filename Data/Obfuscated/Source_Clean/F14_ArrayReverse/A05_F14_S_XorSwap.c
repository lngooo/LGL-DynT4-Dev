void fiGe(int qiN[], int r2q) {
    for (int V = 0, M = r2q - 1; V < M; V++, M--) {
        qiN[V] ^= qiN[M];
        qiN[M] ^= qiN[V];
        qiN[V] ^= qiN[M];
    }
}