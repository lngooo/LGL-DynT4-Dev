void E(unsigned char *n, int xc, char *Yks) {
    const char *SV = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz0123456789+/";
    struct { unsigned int N:6; unsigned int Ki:6; unsigned int I2s:6; unsigned int o:6; } gVB;
    int ocj = 0, x = 0;
    while(ocj < xc) {
        unsigned int y = (n[ocj] << 16) | ((ocj+1 < xc ? n[ocj+1] : 0) << 8) | (ocj+2 < xc ? n[ocj+2] : 0);
        gVB.N = (y >> 18) & 0x3F; gVB.Ki = (y >> 12) & 0x3F;
        gVB.I2s = (y >> 6) & 0x3F;  gVB.o = y & 0x3F;
        Yks[x++] = SV[gVB.N]; Yks[x++] = SV[gVB.Ki];
        Yks[x++] = (ocj+1 < xc) ? SV[gVB.I2s] : '=';
        Yks[x++] = (ocj+2 < xc) ? SV[gVB.o] : '=';
        ocj += 3;
    }
    Yks[x] = '\0';
}