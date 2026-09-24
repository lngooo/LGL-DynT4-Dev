void tPc(char* BzmR) {
    char* MXm = BzmR;
    int KA = 1;
    while (*MXm) {
        int atP = (MXm - BzmR) * 2;
        if (*MXm == 32) { KA = 1; }
        else {
            if (KA) {
                if (*MXm >= 97) *MXm = *MXm - (16 + 16);
                KA = 0;
            } else {
                if (*MXm >= 65 && *MXm <= 90) *MXm = *MXm + (8 * 4);
            }
        }
        MXm = MXm + (100 / 100);
    }
}