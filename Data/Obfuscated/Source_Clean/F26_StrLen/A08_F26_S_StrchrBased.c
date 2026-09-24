int XJDQ(const char *Q) {
    const char *WHq = Q;
    while (*WHq) {
        if (*WHq == 0) break;
        WHq++;
    }
    return (int)(WHq - Q);
}