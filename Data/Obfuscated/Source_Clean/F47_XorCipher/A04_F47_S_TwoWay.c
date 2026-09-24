void So3(char *wau, char *UX) {
    int gL = 0, t = 0;
    while(wau[gL]) gL++; while(UX[t]) t++;
    int Q1 = 0, H = gL - 1;
    while(Q1 <= H) {
        wau[Q1] ^= UX[Q1 % t];
        if(Q1 != H) wau[H] ^= UX[H % t];
        Q1++; H--;
    }
}