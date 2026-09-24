int pO(const char* dZ17) {
    int m = 0;
    while (*dZ17) {
        int r = (unsigned char)*dZ17;
        if (r == 97 || r == 101 || r == 105 || r == 111 || r == 117 ||
            r == 65 || r == 69 || r == 73 || r == 79 || r == 85) m++;
        dZ17++;
    }
    return m;
}