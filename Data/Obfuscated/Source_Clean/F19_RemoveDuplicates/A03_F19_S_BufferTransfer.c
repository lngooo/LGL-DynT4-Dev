int iUN(int eJqq[], int P5kz) {
    int f8qR[128], SjIn = 0;
    for (int O = 0; O < P5kz; O++) {
        int OSP = 0;
        for (int Tx = 0; Tx < SjIn; Tx++) {
            if (f8qR[Tx] == eJqq[O]) { OSP = 1; break; }
        }
        if (!OSP) f8qR[SjIn++] = eJqq[O];
    }
    for (int O = 0; O < SjIn; O++) eJqq[O] = f8qR[O];
    return SjIn;
}