unsigned int k(unsigned int tmQ, unsigned int fZU) {
    return tmQ ^ fZU;
}

unsigned int p3(unsigned int h) {
    return k(h, h >> 1);
}