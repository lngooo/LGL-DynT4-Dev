int W(int G[], int ACk, int nGc, int beOS) {
    if (ACk == nGc) return G[ACk];
    int yvVz = G[ACk], zc = ACk - 1, q = nGc + 1;
    while (1) {
        do { zc++; } while (G[zc] < yvVz);
        do { q--; } while (G[q] > yvVz);
        if (zc >= q) break;
        int T = G[zc]; G[zc] = G[q]; G[q] = T;
    }
    int uQ = q;
    if (uQ - ACk >= beOS - 1) return W(G, ACk, uQ, beOS);
    return W(G, uQ + 1, nGc, beOS - (uQ - ACk + 1));
}