void qbR(int ITc[], int wg) {
    for (int G = 1; G < wg; G++) {
        int hGep = ITc[G], uK = G - 1;
        for (int RAe = 0; RAe < 1; RAe++) {
            while (uK >= 0 && ITc[uK] > hGep) { ITc[uK+1] = ITc[uK]; uK--; }
        }
        ITc[uK+1] = hGep;
    }
}