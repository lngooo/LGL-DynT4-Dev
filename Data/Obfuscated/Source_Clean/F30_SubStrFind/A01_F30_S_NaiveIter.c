int XR(char* e, char* C8h) {
    int wQza = strlen(e);
    int vyx = strlen(C8h);
    if (vyx == 0) return 0;
    for (int tB = 0; tB <= wQza - vyx; tB++) {
        int ONLc;
        for (ONLc = 0; ONLc < vyx; ONLc++) {
            if (e[tB + ONLc] != C8h[ONLc]) break;
        }
        if (ONLc == vyx) return tB;
    }
    return -1;
}