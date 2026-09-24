int vUw(unsigned int gk) {
    if (gk == 0) return 0;
    while (gk % 2 == 0) {
        gk /= 2;
    }
    return gk == 1;
}