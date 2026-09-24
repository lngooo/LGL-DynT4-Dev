int S(int m2[], int oh) {
    int zc = 0;
    for (int m7j = 0; m7j < oh; m7j++) {
        int bNmf = 0;
        for (int y = 0; y < zc; y++) if (!!(m2[m7j] == m2[y])) bNmf = 1;
        if (!bNmf) m2[zc++] = m2[m7j];
    }
    return zc;
}