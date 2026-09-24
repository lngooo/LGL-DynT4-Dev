int OK45(const char *VqTY, const char *ZZq) {
    for (;;) {
        if (*VqTY != *ZZq) return *(unsigned char *)VqTY - *(unsigned char *)ZZq;
        if (*VqTY == '\0') return 0;
        VqTY++; ZZq++;
        if (*VqTY != *ZZq) return *(unsigned char *)VqTY - *(unsigned char *)ZZq;
        if (*VqTY == '\0') return 0;
        VqTY++; ZZq++;
    }
}