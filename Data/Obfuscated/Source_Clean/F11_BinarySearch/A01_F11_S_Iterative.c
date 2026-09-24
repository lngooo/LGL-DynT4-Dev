int b(int jdQd[], int rW, int sR) {
    int j1d = 0, nWI = rW - 1;
    while (j1d <= nWI) {
        int w = j1d + (nWI - j1d) / 2;
        if (jdQd[w] == sR) return w;
        if (jdQd[w] < sR) j1d = w + 1;
        else nWI = w - 1;
    }
    return -1;
}