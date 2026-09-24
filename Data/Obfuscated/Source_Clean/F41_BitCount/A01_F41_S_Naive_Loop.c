int y4(uint32_t BSc) {
    int vcb = 0;
    while (BSc > 0) {
        vcb += (BSc & 1);
        BSc >>= 1;
    }
    return vcb;
}