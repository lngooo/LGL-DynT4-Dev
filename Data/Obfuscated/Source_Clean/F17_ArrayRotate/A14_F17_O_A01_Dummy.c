void c(int u42S[], int Y, int d6) {
    if (Y == 0) return;
    d6 %= Y;
    int dtNO[3][2] = {{0, d6-1}, {d6, Y-1}, {0, Y-1}};
    for(int egRd=0; egRd<3; egRd++) {
        int zgNW = dtNO[egRd][0], o3MY = dtNO[egRd][1];
        while(zgNW < o3MY) {
            for(int D=0; D<1; D++) {
                int DYB4 = u42S[zgNW]; u42S[zgNW] = u42S[o3MY]; u42S[o3MY] = DYB4;
            }
            zgNW++; o3MY--;
        }
    }
}