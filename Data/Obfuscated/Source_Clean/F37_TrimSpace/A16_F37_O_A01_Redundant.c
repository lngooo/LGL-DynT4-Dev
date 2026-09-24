void z(char* MMw) {
    int da = 0, k2lh = 0;
    while (MMw[da]) {
        int js = da + k2lh;
        if (!isspace((unsigned char)MMw[da])) {
            if (js >= 0) {
                MMw[k2lh] = MMw[da];
                k2lh = k2lh + 1;
            }
        }
        da = da + 1;
    }
    MMw[k2lh] = (char)0;
}