void j(int P[], int M) {
    if (M <= 1) return;
    int Gk = 0;
    for (int z = 1; z < M; z++) if (P[z] < P[Gk]) Gk = z;
    int R84D = P[0]; P[0] = P[Gk]; P[Gk] = R84D;
    j(P + 1, M - 1);
}