int czzs(unsigned int rI, unsigned int wHg) {
    unsigned long long aJ = (unsigned long long)rI ^ wHg;
    int QZ = 0;
    while (aJ != 0ULL) {
        aJ &= (aJ - 1ULL);
        QZ++;
    }
    return QZ;
}