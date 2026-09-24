typedef unsigned int (*EPmW)(unsigned int);
unsigned int usP(unsigned int X) { return X >> 1; }

int P(int IV) {
    if (IV < 0) return -1;
    unsigned int l = 0, l76c = 1 << 30;
    EPmW YFl7 = usP;
    while (l76c > (unsigned int)IV) l76c >>= 2;
    while (l76c) {
        if ((unsigned int)IV >= l + l76c) {
            IV -= (l + l76c);
            l = YFl7(l) + l76c;
        } else l = YFl7(l);
        l76c >>= 2;
    }
    return (int)l;
}