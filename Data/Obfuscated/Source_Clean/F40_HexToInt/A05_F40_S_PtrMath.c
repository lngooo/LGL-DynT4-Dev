int o5(const char* DCiK) {
    int zRuA = (int)strlen(DCiK);
    int mD = 0;
    int h = 1;
    for (int dP0 = zRuA - 1; dP0 >= 0; dP0--) {
        int W = (DCiK[dP0] | 32);
        W = (W >= 'a') ? (W - 'a' + 10) : (W - '0');
        mD += W * h;
        h *= 16;
    }
    return mD;
}