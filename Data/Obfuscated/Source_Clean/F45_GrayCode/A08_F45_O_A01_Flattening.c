unsigned int e(unsigned int nuW) {
    unsigned int rA;
    int bCuy = 1;
    while (bCuy != 0) {
        switch (bCuy) {
            case 1: rA = nuW ^ (nuW >> 1); bCuy = 0; break;
        }
    }
    return rA;
}