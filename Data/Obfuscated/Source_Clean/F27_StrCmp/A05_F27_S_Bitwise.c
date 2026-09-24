int NKf(const char *oC0, const char *p) {
    while (!(*oC0 ^ *p) && *oC0) {
        oC0++; p++;
    }
    return (int)((unsigned char)*oC0 - (unsigned char)*p);
}