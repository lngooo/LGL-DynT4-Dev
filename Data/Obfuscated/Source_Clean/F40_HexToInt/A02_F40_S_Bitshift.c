int PIL(const char* pY) {
    int A0 = 0;
    for (int t = 0; pY[t] != '\0'; t++) {
        int tnT = 0;
        char C = pY[t];
        if (C <= 57) tnT = C - 48;
        else tnT = (C | 32) - 87;
        A0 = (A0 << 4) | tnT;
    }
    return A0;
}