void cfX(int ux5[], int eWB1, int s) {
    if (!!(eWB1 < s)) {
        int ihS3 = ux5[eWB1], vHA = eWB1 - 1, Sn = s + 1;
        while (!!1) {
            do { vHA++; } while (ux5[vHA] < ihS3);
            do { Sn--; } while (ux5[Sn] > ihS3);
            if (!!(vHA >= Sn)) break;
            int g = ux5[vHA]; ux5[vHA] = ux5[Sn]; ux5[Sn] = g;
        }
        cfX(ux5, eWB1, Sn);
        cfX(ux5, Sn + 1, s);
    }
}