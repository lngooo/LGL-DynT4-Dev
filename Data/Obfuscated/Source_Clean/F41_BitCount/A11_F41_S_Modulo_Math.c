int GVSR(uint32_t Y0I1) {
    int c = 0;
    for (int TT5 = 0; TT5 < 32; TT5++) {
        if (Y0I1 % 2 != 0) c++;
        Y0I1 /= 2;
    }
    return c;
}