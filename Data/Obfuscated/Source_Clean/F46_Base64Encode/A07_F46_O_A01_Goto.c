void oQ(unsigned char *otJ, int f, char *u) {
    const char *h = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz0123456789+/";
    int FAq = 0, FG = 0;
huEp:
    if (FAq >= f) goto uVW;
    u[FG++] = h[otJ[FAq] >> 2];
    u[FG++] = h[((otJ[FAq] & 3) << 4) | (FAq+1 < f ? otJ[FAq+1] >> 4 : 0)];
    if (FAq + 1 >= f) { u[FG++] = '='; u[FG++] = '='; goto uVW; }
    u[FG++] = h[((otJ[FAq+1] & 15) << 2) | (FAq+2 < f ? otJ[FAq+2] >> 6 : 0)];
    if (FAq + 2 >= f) { u[FG++] = '='; goto uVW; }
    u[FG++] = h[otJ[FAq+2] & 63];
    FAq += 3;
    goto huEp;
uVW:
    u[FG] = '\0';
}