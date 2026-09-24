int N4(int e) {
    if (e < 0) return -1;
    if (e < 2) return e;
    long zTU = 0, HAXA = e, i = 0;
    while (zTU <= HAXA) {
        long PeC = zTU + (HAXA - zTU) / 2;
        if (PeC * PeC <= e) {
            i = PeC;
            zTU = PeC + 1;
        } else {
            HAXA = PeC - 1;
        }
    }
    return (int)i;
}