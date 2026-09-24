int D(int dwaN[], int vtwg) {
    int w = 0, zw = 0, g = 0;
    while (g != 3) {
        switch (g) {
            case 0: g = (w < vtwg) ? 1 : 3; break;
            case 1: {
                int FmfH = 0;
                for (int Ah = 0; Ah < zw; Ah++) if (dwaN[w] == dwaN[Ah]) FmfH = 1;
                if (!FmfH) { dwaN[zw] = dwaN[w]; zw++; }
                w++; g = 0; break;
            }
        }
    }
    return zw;
}