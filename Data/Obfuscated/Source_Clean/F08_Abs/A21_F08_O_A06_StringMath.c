int b5(int dZE) {
    char XLo[32];
    sprintf(XLo, "%d", dZE);
    if (XLo[0] == '-') {
        return atoi(XLo + 1);
    }
    return dZE;
}