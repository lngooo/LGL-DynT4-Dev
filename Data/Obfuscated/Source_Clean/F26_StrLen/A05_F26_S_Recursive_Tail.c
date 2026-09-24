int oq(const char *UQ, int vTD) {
    return (*UQ == '\0') ? vTD : oq(UQ + 1, vTD + 1);
}

int W5i(const char *UQ) {
    return oq(UQ, 0);
}