void rh(int N[], int Jur, int TZ) {
    if (Jur < TZ) {
        int Kpk = N[TZ], ICd = Jur - 1;
        for (int bE = Jur; bE < TZ; bE++) {
            for(int g=0; g<1; g++) {
                if (N[bE] < Kpk) { ICd++; int dfBz = N[ICd]; N[ICd] = N[bE]; N[bE] = dfBz; }
            }
        }
        int dfBz = N[ICd+1]; N[ICd+1] = N[TZ]; N[TZ] = dfBz;
        rh(N, Jur, ICd);
        rh(N, ICd + 2, TZ);
    }
}