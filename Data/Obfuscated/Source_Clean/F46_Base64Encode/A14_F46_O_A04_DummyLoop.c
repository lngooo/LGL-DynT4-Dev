void D(unsigned char *P4F, int Mh9F, char *B) {
    const char *dX = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz0123456789+/";
    for(int kN4=0; kN4<Mh9F; kN4+=3) {
        for(int hsr=0; hsr<1; hsr++) {
            int KJoc = P4F[kN4], l8g = (kN4+1<Mh9F)?P4F[kN4+1]:-1, LanL = (kN4+2<Mh9F)?P4F[kN4+2]:-1;
            B[(kN4/3)*4] = dX[KJoc >> 2];
            B[(kN4/3)*4+1] = dX[((KJoc & 3) << 4) | (l8g == -1 ? 0 : l8g >> 4)];
            B[(kN4/3)*4+2] = (l8g == -1) ? '=' : dX[((l8g & 15) << 2) | (LanL == -1 ? 0 : LanL >> 6)];
            B[(kN4/3)*4+3] = (LanL == -1) ? '=' : dX[LanL & 63];
        }
    }
    B[((Mh9F+2)/3)*4] = 0;
}