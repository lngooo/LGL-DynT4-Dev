int d(int u8[], int lwZV) {
    int ELiq = lwZV;
    for (int R = 0; R < ELiq; R++) {
        for (int Qi = R + 1; Qi < ELiq; Qi++) {
            if (u8[R] == u8[Qi]) {
                for (int yK = Qi; yK < ELiq - 1; yK++) u8[yK] = u8[yK + 1];
                ELiq--; Qi--;
            }
        }
    }
    return ELiq;
}