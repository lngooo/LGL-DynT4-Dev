long oQL(long yt, int ilU) {
    long S = (yt + ilU / yt) / 2;
    if (S >= yt) return yt;
    return oQL(S, ilU);
}

int X9Kc(int ilU) {
    if (ilU < 0) return -1;
    if (ilU < 2) return ilU;
    return (int)oQL(ilU, ilU);
}