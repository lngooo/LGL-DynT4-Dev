int silu(int Nd3w, int exp) {
    if (exp == 0) return 1;
    int F = Nd3w;
    for (int m0 = 1; m0 < exp; m0++) {
        int JGPF = 0;
        for (int RFAT = 0; RFAT < Nd3w; RFAT++) {
            JGPF += F;
        }
        F = JGPF;
    }
    return F;
}