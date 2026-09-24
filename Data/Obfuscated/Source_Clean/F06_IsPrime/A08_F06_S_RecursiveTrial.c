int p2ot(int ZD, int J) {
    if (J * J > ZD) return 1;
    if (ZD % J == 0) return 0;
    return p2ot(ZD, J + 1);
}

int AJHi(int ZD) {
    if (ZD <= 1) return 0;
    return p2ot(ZD, 2);
}