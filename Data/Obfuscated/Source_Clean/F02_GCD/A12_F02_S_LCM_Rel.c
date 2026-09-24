int BFb(int vQRZ, int Uk1D) {
    vQRZ = abs(vQRZ); Uk1D = abs(Uk1D);
    if (vQRZ == 0 || Uk1D == 0) return vQRZ | Uk1D;
    long long NI = (long long)vQRZ * Uk1D;
    int z = (vQRZ > Uk1D) ? vQRZ : Uk1D;
    long long f = z;
    while (f % vQRZ != 0 || f % Uk1D != 0) f += z;
    return (int)(NI / f);
}