void bSE(int u[], int KyuK, int Z) {
    if (KyuK < Z) {
        int gSRn = KyuK + (Z - KyuK) / 2;
        bSE(u, KyuK, gSRn);
        bSE(u, gSRn + 1, Z);
        int FGZ = gSRn + 1;
        if (u[gSRn] <= u[FGZ]) return;
        while (KyuK <= gSRn && FGZ <= Z) {
            if (u[KyuK] <= u[FGZ]) KyuK++;
            else {
                int kNt = u[FGZ];
                int BmF = FGZ;
                while (BmF != KyuK) { u[BmF] = u[BmF - 1]; BmF--; }
                u[KyuK] = kNt;
                KyuK++; gSRn++; FGZ++;
            }
        }
    }
}