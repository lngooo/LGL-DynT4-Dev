uint32_t c(uint32_t ud4) {
    union {
        uint32_t tn;
        uint8_t nze5[4];
    } SYY, nyWz;
    SYY.tn = ud4;
    nyWz.nze5[0] = SYY.nze5[3];
    nyWz.nze5[1] = SYY.nze5[2];
    nyWz.nze5[2] = SYY.nze5[1];
    nyWz.nze5[3] = SYY.nze5[0];
    return nyWz.tn;
}