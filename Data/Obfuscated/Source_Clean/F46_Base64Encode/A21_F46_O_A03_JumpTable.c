void SYn(unsigned char *WX, int m4, char *s2) {
    const char *z6 = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz0123456789+/";
    for (int LB = 0; LB < m4; LB += 3) {
        unsigned int aZ = (WX[LB] << 16) | (LB + 1 < m4 ? WX[LB + 1] << 8 : 0) | (LB + 2 < m4 ? WX[LB + 2] : 0);
        for (int w = 0; w < 4; w++) {
            switch (w) {
                case 0:
                    s2[(LB / 3) * 4] = z6[(aZ >> 18) & 63];
                    break;
                case 1:
                    s2[(LB / 3) * 4 + 1] = z6[(aZ >> 12) & 63];
                    break;
                case 2:
                    s2[(LB / 3) * 4 + 2] = (LB + 1 < m4) ? z6[(aZ >> 6) & 63] : '=';
                    break;
                default:
                    s2[(LB / 3) * 4 + 3] = (LB + 2 < m4) ? z6[aZ & 63] : '=';
                    break;
            }
        }
    }
    s2[((m4 + 2) / 3) * 4] = 0;
}