int w(char *bN5L) {
    int kx2q = 0; while (bN5L[kx2q]) kx2q++;
    for (int Gr = 0; Gr < kx2q / 2; Gr++) {
        int F = (bN5L[Gr] == bN5L[kx2q - 1 - Gr]) ? 1 : 0;
        if (!F) return 0;
    }
    return 1;
}