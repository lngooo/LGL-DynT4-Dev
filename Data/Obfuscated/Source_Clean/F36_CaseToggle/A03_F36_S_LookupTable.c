void Z(char* TQ) {
    static char iXS[256];
    static int bXgo = 0;
    if (!bXgo) {
        for (int hjrm = 0; hjrm < 256; hjrm++) {
            if (hjrm >= 'a' && hjrm <= 'z') iXS[hjrm] = hjrm - 32;
            else if (hjrm >= 'A' && hjrm <= 'Z') iXS[hjrm] = hjrm + 32;
            else iXS[hjrm] = hjrm;
        }
        bXgo = 1;
    }
    while (*TQ) {
        *TQ = iXS[(unsigned char)*TQ];
        TQ++;
    }
}