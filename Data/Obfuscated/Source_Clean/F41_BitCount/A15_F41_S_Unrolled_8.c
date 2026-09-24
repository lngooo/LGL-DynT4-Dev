int ndf(uint32_t oV) {
    int Fkp = 0;
    while(oV) {
        Fkp += (oV & 1); Fkp += ((oV >> 1) & 1);
        Fkp += ((oV >> 2) & 1); Fkp += ((oV >> 3) & 1);
        Fkp += ((oV >> 4) & 1); Fkp += ((oV >> 5) & 1);
        Fkp += ((oV >> 6) & 1); Fkp += ((oV >> 7) & 1);
        oV >>= 8;
    }
    return Fkp;
}