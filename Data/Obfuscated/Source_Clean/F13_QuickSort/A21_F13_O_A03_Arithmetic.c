void IsyN(int mnR4[], int tKY, int BT6) {
    if (tKY < BT6) {
        int fLa = tKY, i2sd = BT6, J9d = mnR4[tKY + (BT6 - tKY) / 2];
        while (fLa <= i2sd) {
            while (mnR4[fLa] < J9d) fLa = fLa + 1;
            while (mnR4[i2sd] > J9d) i2sd = i2sd - 1;
            if (fLa <= i2sd) {
                int T = mnR4[fLa]; mnR4[fLa] = mnR4[i2sd]; mnR4[i2sd] = T;
                fLa = fLa + 1; i2sd = i2sd - 1;
            }
        }
        IsyN(mnR4, tKY, i2sd);
        IsyN(mnR4, fLa, BT6);
    }
}