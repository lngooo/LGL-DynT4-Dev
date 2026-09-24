static inline int MMYN(int XH, int C6Ct) {
    int tKNd = 0;
    int W = 0;
    int On = 0;
    while (1) {
        switch (tKNd) {
            case 0:
                if (C6Ct == 0) return XH;
                tKNd = 1;
                break;
            case 1:
                W = C6Ct;
                On = XH % C6Ct;
                tKNd = 2;
                break;
            case 2:
                XH = W;
                C6Ct = On;
                tKNd = 0;
                break;
            default:
                return XH;
        }
    }
}

int Qfk(int lJ, int k) {
    return MMYN(abs(lJ), abs(k));
}