void hpgW(unsigned char *VgL0, int WPJA, char *X) {
    const char *O = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz0123456789+/";
    if (WPJA <= 0) { *X = '\0'; return; }
    unsigned int jW8w = VgL0[0] << 16 | (WPJA > 1 ? VgL0[1] << 8 : 0) | (WPJA > 2 ? VgL0[2] : 0);
    X[0] = O[(jW8w >> 18) & 0x3F];
    X[1] = O[(jW8w >> 12) & 0x3F];
    X[2] = WPJA > 1 ? O[(jW8w >> 6) & 0x3F] : '=';
    X[3] = WPJA > 2 ? O[jW8w & 0x3F] : '=';
    hpgW(VgL0 + 3, WPJA - 3, X + 4);
}