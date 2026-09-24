void v(unsigned char *c, int Lmn, char *A1) {
    const char *lq6r = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz0123456789+/";
    for(int Ko2h=0; Ko2h<((Lmn+2)/3)*3; Ko2h+=3) {
        int kKrY = (Ko2h < Lmn) ? c[Ko2h] : 0;
        int Bp6J = (Ko2h+1 < Lmn) ? c[Ko2h+1] : 0;
        int I = (Ko2h+2 < Lmn) ? c[Ko2h+2] : 0;
        A1[(Ko2h/3)*4] = lq6r[kKrY >> 2];
        A1[(Ko2h/3)*4+1] = lq6r[((kKrY & 3) << 4) | (Bp6J >> 4)];
        A1[(Ko2h/3)*4+2] = (Ko2h+1 < Lmn) ? lq6r[((Bp6J & 15) << 2) | (I >> 6)] : '=';
        A1[(Ko2h/3)*4+3] = (Ko2h+2 < Lmn) ? lq6r[I & 63] : '=';
    }
    A1[((Lmn+2)/3)*4] = 0;
}