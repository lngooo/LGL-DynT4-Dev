struct MZNo { int Z; };

void Bv(int uhRK[], int u1) {
    struct MZNo Wc = {0}, ve = {u1 - 1};
    while (Wc.Z < ve.Z) {
        int r = uhRK[Wc.Z];
        uhRK[Wc.Z] = uhRK[ve.Z];
        uhRK[ve.Z] = r;
        Wc.Z++; ve.Z--;
    }
}