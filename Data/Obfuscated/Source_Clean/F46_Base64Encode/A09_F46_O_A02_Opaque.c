void b(unsigned char *nd0G, int hxyZ, char *WPE) {
    if (hxyZ <= 0) { *WPE = '\0'; return; }
    const char *EQ = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz0123456789+/";
    if ((hxyZ * hxyZ + hxyZ) % 2 == 0) {
        unsigned int n = nd0G[0] << 16 | (hxyZ > 1 ? nd0G[1] << 8 : 0) | (hxyZ > 2 ? nd0G[2] : 0);
        WPE[0] = EQ[(n >> 18) & 0x3F];
        WPE[1] = EQ[(n >> 12) & 0x3F];
        WPE[2] = hxyZ > 1 ? EQ[(n >> 6) & 0x3F] : '=';
        WPE[3] = hxyZ > 2 ? EQ[n & 0x3F] : '=';
        b(nd0G + 3, hxyZ - 3, WPE + 4);
    }
}