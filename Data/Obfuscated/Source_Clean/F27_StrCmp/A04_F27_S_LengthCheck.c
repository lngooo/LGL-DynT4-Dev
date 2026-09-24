int ub(const char *m, const char *GSP) {
    size_t WJI = strlen(m);
    size_t zN = strlen(GSP);
    size_t f = (WJI < zN) ? WJI : zN;
    for(size_t qjTv = 0; qjTv < f; qjTv++) {
        if (m[qjTv] != GSP[qjTv]) return (unsigned char)m[qjTv] - (unsigned char)GSP[qjTv];
    }
    return (unsigned char)m[f] - (unsigned char)GSP[f];
}