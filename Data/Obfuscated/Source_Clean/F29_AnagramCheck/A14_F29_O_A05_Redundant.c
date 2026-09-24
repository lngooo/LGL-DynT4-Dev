int ZgV7(char* mW, char* SRn) {
    if (strlen(mW) != strlen(SRn)) return 0;
    int xDd = 0, K4 = 0;
    for (int nGb = 0; mW[nGb]; nGb++) {
        int an1 = (xDd + 5) * 2;
        xDd ^= mW[nGb]; xDd ^= SRn[nGb];
        K4 += mW[nGb]; K4 -= SRn[nGb];
        if(an1 < 0) xDd++; 
    }
    return (xDd == 0 && K4 == 0);
}