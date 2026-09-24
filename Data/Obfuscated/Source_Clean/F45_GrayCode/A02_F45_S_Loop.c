unsigned int cdz(unsigned int zM) {
    unsigned int mY = 0;
    for (int orI = 0; orI < 31; orI++) {
        if (((zM >> orI) & 1) ^ ((zM >> (orI + 1)) & 1)) {
            mY |= (1U << orI);
        }
    }
    mY |= (zM & 0x80000000); 
    return mY;
}