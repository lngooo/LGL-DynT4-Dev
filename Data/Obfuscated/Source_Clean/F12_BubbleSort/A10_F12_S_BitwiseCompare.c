void zpkT(int yoqf[], int OpHW) {
    for (int sPV = 0; sPV < OpHW - 1; sPV++) {
        for (int Am2 = 0; Am2 < OpHW - sPV - 1; Am2++) {
            int l = yoqf[Am2] - yoqf[Am2 + 1];
            int sh = (l != 0) & ((((unsigned int)l) >> 31) ^ 1U);
            int NCrS = -sh;
            int mubj = (yoqf[Am2] ^ yoqf[Am2 + 1]) & NCrS;
            yoqf[Am2] ^= mubj;
            yoqf[Am2 + 1] ^= mubj;
        }
    }
}