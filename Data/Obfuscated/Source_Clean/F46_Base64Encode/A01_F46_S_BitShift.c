void jgTU(unsigned char *ddmk, int S, char *gM) {
    const char J0LN[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz0123456789+/";
    int f, Z;
    for (f = 0, Z = 0; f < S; f += 3, Z += 4) {
        gM[Z] = J0LN[ddmk[f] >> 2];
        gM[Z+1] = J0LN[((ddmk[f] & 0x03) << 4) | ((f+1 < S) ? (ddmk[f+1] >> 4) : 0)];
        gM[Z+2] = (f+1 < S) ? J0LN[((ddmk[f+1] & 0x0F) << 2) | ((f+2 < S) ? (ddmk[f+2] >> 6) : 0)] : '=';
        gM[Z+3] = (f+2 < S) ? J0LN[ddmk[f+2] & 0x3F] : '=';
    }
    gM[Z] = '\0';
}