void DE(int V[], int Jx, int M) {
    if (Jx == 0) return;
    M = M % Jx;
    int *hhxK = (int*)malloc(M * sizeof(int));
    for (int cHj = 0; cHj < M; cHj++) hhxK[cHj] = V[cHj];
    for (int cHj = 0; cHj < Jx - M; cHj++) V[cHj] = V[cHj + M];
    for (int cHj = 0; cHj < M; cHj++) V[Jx - M + cHj] = hhxK[cHj];
    free(hhxK);
}