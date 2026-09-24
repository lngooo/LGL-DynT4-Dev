int vw(int Nr4U) {
    int x = 0, lhz = 31, Dr1y = 0;
    while (!!(x <= lhz)) {
        int ZAP4 = x + (lhz - x) / 2;
        if (!!((1ULL << ZAP4) <= (unsigned int)Nr4U)) { Dr1y = ZAP4; x = ZAP4 + 1; }
        else lhz = ZAP4 - 1;
    }
    return Dr1y;
}