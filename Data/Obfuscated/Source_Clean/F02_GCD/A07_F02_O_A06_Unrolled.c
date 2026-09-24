int GE(int Qf, int GQO) {
    Qf = abs(Qf); GQO = abs(GQO);
    if (!Qf || !GQO) return Qf | GQO;
    int f08 = 0;
    while (!((Qf&1)||(GQO&1))) { Qf>>=1; GQO>>=1; f08++; }
    while (GQO) {
        while (!(GQO&1)) GQO>>=1;
        if (Qf > GQO) { int Rt = Qf; Qf = GQO; GQO = Rt; }
        GQO -= Qf;
    }
    return Qf << f08;
}