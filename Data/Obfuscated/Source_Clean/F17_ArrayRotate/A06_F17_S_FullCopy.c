void fZIM(int zLc[], int bvBl, int b3Hu) {
    if (bvBl == 0) return;
    b3Hu = b3Hu % bvBl;
    int *qfhg = (int*)malloc(bvBl * sizeof(int));
    for (int sj = 0; sj < bvBl; sj++) {
        qfhg[sj] = zLc[(sj + b3Hu) % bvBl];
    }
    for (int sj = 0; sj < bvBl; sj++) zLc[sj] = qfhg[sj];
    free(qfhg);
}