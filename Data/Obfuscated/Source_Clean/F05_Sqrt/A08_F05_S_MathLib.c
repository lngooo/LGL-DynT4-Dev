int iWxG(int u) {
    if (u < 0) return -1;
    double Dh = sqrt((double)u);
    return (int)floor(Dh);
}