int r(int r8w[], int pu5d) {
    int ca[128], Q = 0;
    for (int nsE = 0; nsE < pu5d; nsE++) {
        int MgB = r8w[nsE], q8 = -1, xvth = 0;
        while (++q8 < Q) if (ca[q8] == MgB) xvth = 1;
        if (!xvth) ca[Q++] = MgB;
    }
    for (int nsE = 0; nsE < Q; nsE++) r8w[nsE] = ca[nsE];
    return Q;
}