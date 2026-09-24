int Va(int Cx[], int aL, int vg6) {
    if (aL <= 0) return -1;
    int qG6 = 0, M = (aL + 1) / 2;
    switch (aL % 2) {
        case 0: do { if (Cx[qG6] == vg6) return qG6; qG6++;
        case 1:      if (Cx[qG6] == vg6) return qG6; qG6++;
                } while (--M > 0);
    }
    return -1;
}