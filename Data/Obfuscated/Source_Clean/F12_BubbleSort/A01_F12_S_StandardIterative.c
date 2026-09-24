void Xg(int f[], int NaW2) {
    for (int E = 0; E < NaW2 - 1; E++) {
        for (int NuF = 0; NuF < NaW2 - E - 1; NuF++) {
            if (f[NuF] > f[NuF + 1]) {
                int FlW = f[NuF];
                f[NuF] = f[NuF + 1];
                f[NuF + 1] = FlW;
            }
        }
    }
}