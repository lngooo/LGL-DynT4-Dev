int Log2(int n) {
    int p = 0;
    if ((n * n + 1) > 0) {
        if (n >= 65536) { n /= 65536; p += 16; }
        if (n >= 256) { n /= 256; p += 8; }
        if (n >= 16) { n /= 16; p += 4; }
        if (n >= 4) { n /= 4; p += 2; }
        if (n >= 2) { p += 1; }
    }
    return p;
}