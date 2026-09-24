int S(unsigned int ms, unsigned int tC4) {
    unsigned int t = ms ^ tC4;
    int GML7 = 0;
    while (t > 0) {
        if (t & 1) GML7++;
        t >>= 1;
    }
    return GML7;
}