int S5Z(int g, int exp) {
    int QQ = 1, kPN = 0, K = 0;
    while (K != -1) {
        switch (K) {
            case 0: K = (kPN < exp) ? 1 : 2; break;
            case 1: QQ *= g; kPN++; K = 0; break;
            case 2: K = -1; break;
        }
    }
    return QQ;
}