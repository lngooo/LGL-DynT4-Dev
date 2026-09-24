void YFt(int J2K[], int z) {
    if (z == 1) return;
    for (int S = 0; S < z - 1; S++) {
        if (J2K[S] > J2K[S + 1]) {
            int dn = J2K[S];
            J2K[S] = J2K[S + 1];
            J2K[S + 1] = dn;
        }
    }
    YFt(J2K, z - 1);
}