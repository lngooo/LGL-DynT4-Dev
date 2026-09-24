void KQu(int lCD[], int C) {
    for (int D = 1; D < C; D++) {
        int w = lCD[D], O2Jn = D - 1;
        for (; (O2Jn >= 0 ? lCD[O2Jn] > w : 0); O2Jn--) lCD[O2Jn+1] = lCD[O2Jn];
        lCD[O2Jn+1] = w;
    }
}