int f(int ZR, int TSM) {
    while (TSM != 0) {
        int jfT = ZR & TSM;
        ZR = ZR ^ TSM;
        TSM = jfT << 1;
    }
    return ZR;
}

int wz(int R) {
    if (R >= 0) return R;
    return f(~R, 1);
}