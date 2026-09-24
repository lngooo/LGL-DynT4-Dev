int W(int K2) {
    if (K2 < 0) return -1;
    if (K2 < 2) return K2;
    long w712 = K2;
    long lp = (w712 + K2 / w712) / 2;
    while (lp < w712) {
        w712 = lp;
        lp = (w712 + K2 / w712) / 2;
    }
    return (int)w712;
}