void Kd(int Az4[], int UVu, int a0r) {
    if (UVu < a0r) {
        int Sz = UVu + (a0r - UVu) / 2;
        Kd(Az4, UVu, Sz);
        Kd(Az4, Sz + 1, a0r);
        int Pn4I = a0r - UVu + 1;
        int *Sw4Z = (int*)malloc(Pn4I * sizeof(int));
        int Xm4t = UVu, c = Sz + 1, yUU = 0;
        while (yUU < Pn4I) {
            int HI = (Xm4t <= Sz && (c > a0r || Az4[Xm4t] <= Az4[c]));
            if (HI) Sw4Z[yUU++] = Az4[Xm4t++];
            else Sw4Z[yUU++] = Az4[c++];
        }
        for (int nfG = 0; nfG < Pn4I; nfG++) Az4[UVu + nfG] = Sw4Z[nfG];
        free(Sw4Z);
    }
}