void lk0h(unsigned char *LcYy, int Jw2D, char *zQE) {
    const char *y = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz0123456789+/";
    for (int RRwe = 0, NShp = 0; RRwe < Jw2D; RRwe += 3) {
        unsigned char SV8 = LcYy[RRwe], fu = (RRwe+1 < Jw2D) ? LcYy[RRwe+1] : 0, V = (RRwe+2 < Jw2D) ? LcYy[RRwe+2] : 0;
        zQE[NShp++] = y[SV8 >> 2];
        zQE[NShp++] = y[((SV8 & 0x03) << 4) | (fu >> 4)];
        zQE[NShp++] = (RRwe+1 < Jw2D) ? y[((fu & 0x0F) << 2) | (V >> 6)] : '=';
        zQE[NShp++] = (RRwe+2 < Jw2D) ? y[V & 0x3F] : '=';
    }
    zQE[((Jw2D + 2) / 3) * 4] = '\0';
}