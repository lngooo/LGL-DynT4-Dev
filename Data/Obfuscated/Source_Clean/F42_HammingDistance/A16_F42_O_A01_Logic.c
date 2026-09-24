int H8Ov(unsigned int zU, unsigned int XLI) {
    unsigned int q = zU ^ XLI;
    int uaY = 0;
    while (!(q == 0)) {
        if (!!(q & 1)) {
            uaY++;
        }
        q >>= 1;
    }
    return uaY;
}