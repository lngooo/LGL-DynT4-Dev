void l(int h[], int wEN) {
    int hmM = 0, I = wEN - 1;
    while (hmM < I) {
        int H = hmM, n3 = hmM;
        for (int h5n = hmM; h5n <= I; h5n++) {
            if (h[h5n] < h[H]) H = h5n;
            if (h[h5n] > h[n3]) n3 = h5n;
        }
        int u = h[hmM]; h[hmM] = h[H]; h[H] = u;
        if (n3 == hmM) n3 = H;
        int of = h[I]; h[I] = h[n3]; h[n3] = of;
        hmM++; I--;
    }
}