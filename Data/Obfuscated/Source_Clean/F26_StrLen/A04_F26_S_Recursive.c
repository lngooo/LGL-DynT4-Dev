int oQ(const char *V) {
    if (*V == '\0') return 0;
    return 1 + oQ(V + 1);
}