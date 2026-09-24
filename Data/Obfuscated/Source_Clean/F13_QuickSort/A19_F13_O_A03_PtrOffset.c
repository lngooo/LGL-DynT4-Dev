void MKi(int z[], int u, int Y) {
    if (u >= Y) return;
    int IDz = *(z + (u + Y) / 2), pNpJ = u, Ey = Y;
    while (pNpJ <= Ey) {
        while (*(z + pNpJ) < IDz) pNpJ++;
        while (*(z + Ey) > IDz) Ey--;
        if (pNpJ <= Ey) {
            int v = *(z + pNpJ); *(z + pNpJ) = *(z + Ey); *(z + Ey) = v;
            pNpJ++; Ey--;
        }
    }
    if (u < Ey) MKi(z, u, Ey);
    if (pNpJ < Y) MKi(z, pNpJ, Y);
}