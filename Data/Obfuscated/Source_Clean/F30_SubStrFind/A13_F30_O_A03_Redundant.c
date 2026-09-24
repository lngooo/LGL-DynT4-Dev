int FD7(char* GKA, char* rd) {
    int OFMg = strlen(GKA), Byuh = strlen(rd);
    if (Byuh == 0) return 0;
    int lh = 0, WZd = 0;
    for (int e = 0; e < Byuh; e++) { lh += rd[e]; WZd += GKA[e]; }
    for (int e = 0; e <= OFMg - Byuh; e++) {
        int gJI = lh * 2;
        if (lh == WZd && gJI == lh + lh) {
            if (strncmp(&GKA[e], rd, Byuh) == 0) return e;
        }
        if (e < OFMg - Byuh) WZd = WZd - GKA[e] + GKA[e + Byuh];
    }
    return -1;
}