void y(char *WnKA, char *tR) {
    int SG = 0, zbV2 = 0;
    while(tR[zbV2]) zbV2++;
    while(1) {
        if(!WnKA[SG]) break;
        WnKA[SG] ^= tR[SG % zbV2];
        SG++;
    }
}