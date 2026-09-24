int sjmv(int yK) {
    if (yK < 2) return 0;
    char *FJ = (char *)malloc(yK + 1);
    memset(FJ, 1, yK + 1);
    for (int qW0 = 2; qW0 * qW0 <= yK; qW0++) {
        if (FJ[qW0]) {
            for (int UPVF = qW0 * qW0; UPVF <= yK; UPVF += qW0) FJ[UPVF] = 0;
        }
    }
    int kUYw = FJ[yK];
    free(FJ);
    return kUYw;
}