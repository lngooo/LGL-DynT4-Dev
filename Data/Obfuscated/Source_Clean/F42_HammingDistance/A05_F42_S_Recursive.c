int gmn(unsigned int o, unsigned int c) {
    if (o == 0 && c == 0) return 0;
    return ((o & 1) != (c & 1)) + gmn(o >> 1, c >> 1);
}