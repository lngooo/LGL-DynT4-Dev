int KPk(int sH[], int ZN, int HMq) {
    int Dn7v = 0, kH = ZN - 1;
    while (Dn7v <= kH) {
        int auAl = sH[Dn7v];
        int Ee = sH[kH];
        if (auAl == HMq) return Dn7v;
        if (Ee == HMq) return kH;
        Dn7v += 1; kH -= 1;
    }
    return -1;
}