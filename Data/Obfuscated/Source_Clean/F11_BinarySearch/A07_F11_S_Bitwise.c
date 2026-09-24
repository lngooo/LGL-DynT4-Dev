int w(int s[], int Mfs, int yz0Q) {
    int E = 0;
    int Io = 31 - __builtin_clz(Mfs);
    for (int Vz = Io; Vz >= 0; Vz--) {
        int Ojt = E | (1 << Vz);
        if (Ojt < Mfs && s[Ojt] <= yz0Q) E = Ojt;
    }
    return (s[E] == yz0Q) ? E : -1;
}