long pKA(int QQ) {
    long H = 0, e9H = 1, y;
    cOyx:
    if (QQ == 0) return H;
    if (QQ == 1) return e9H;
    y = H + e9H; H = e9H; e9H = y; QQ--;
    goto cOyx;
}