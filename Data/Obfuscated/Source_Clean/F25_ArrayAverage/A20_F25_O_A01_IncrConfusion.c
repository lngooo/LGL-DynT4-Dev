double lK(int iS[], int WcdM) {
    double VQ = 0;
    int xNA = -1;
    while (++xNA < WcdM) VQ += iS[xNA];
    return VQ / WcdM;
}