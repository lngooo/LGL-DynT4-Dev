void Tvwq(unsigned char *B2, int L, char *j2l) {
    const char *n3zV = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz0123456789+/";
    unsigned char *DU = B2;
    char *ld = j2l;
    while (DU < B2 + L) {
        int l8 = (int)(B2 + L - DU);
        *ld++ = n3zV[*DU >> 2];
        *ld++ = n3zV[((*DU & 3) << 4) | (l8 > 1 ? *(DU+1) >> 4 : 0)];
        *ld++ = (l8 > 1) ? n3zV[((*(DU+1) & 15) << 2) | (l8 > 2 ? *(DU+2) >> 6 : 0)] : '=';
        *ld++ = (l8 > 2) ? n3zV[*(DU+2) & 63] : '=';
        DU += 3;
    }
    *ld = 0;
}