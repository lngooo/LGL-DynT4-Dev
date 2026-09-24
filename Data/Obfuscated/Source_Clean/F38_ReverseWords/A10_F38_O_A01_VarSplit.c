void W(char *i8e) {
    int xvGu = 0, D = 0; while(i8e[xvGu+D]) xvGu++;
    int DsTf = xvGu + D;
    for(int Fs=0; Fs < (DsTf >> 1); Fs++) {
        char MlYe = i8e[Fs];
        int I = DsTf - 1 - Fs;
        i8e[Fs] = i8e[I];
        i8e[I] = MlYe;
    }
    int rf = 0;
    for(int iBrl=0; iBrl <= DsTf; iBrl++) {
        if((i8e[iBrl] ^ 32) == 0 || i8e[iBrl] == 0) {
            int jM = (iBrl - rf) / 2;
            for(int vGLe=0; vGLe < jM; vGLe++) {
                char dZT4 = i8e[rf + vGLe];
                i8e[rf + vGLe] = i8e[iBrl - 1 - vGLe];
                i8e[iBrl - 1 - vGLe] = dZT4;
            }
            rf = iBrl + 1;
        }
    }
}