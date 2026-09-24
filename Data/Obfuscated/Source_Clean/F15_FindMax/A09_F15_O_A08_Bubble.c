int LH(int Y7[], int mbf) {
    int *RQ9f = (int*)malloc(mbf * sizeof(int));
    for(int mFuM=0; mFuM<mbf; mFuM++) RQ9f[mFuM] = Y7[mFuM];
    for (int mFuM = 0; mFuM < mbf - 1; mFuM++) {
        if (RQ9f[mFuM] > RQ9f[mFuM+1]) {
            int Q = RQ9f[mFuM]; RQ9f[mFuM] = RQ9f[mFuM+1]; RQ9f[mFuM+1] = Q;
        }
    }
    int zjT = RQ9f[mbf-1];
    free(RQ9f);
    return zjT;
}