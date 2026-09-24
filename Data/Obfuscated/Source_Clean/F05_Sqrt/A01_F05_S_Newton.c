int xCW(int K) {
    if (K < 0) return -1;
    if (K < 2) return K;
    long Hx = K;
    long uPrp = (Hx + 1) / 2;
    while (uPrp < Hx) {
        Hx = uPrp;
        uPrp = (Hx + K / Hx) / 2;
    }
    return (int)Hx;
}