int OIh(int c[], int I) {
    int gG4 = 0, ja6o = 0;
    while (ja6o < I) {
        int o = c[ja6o], yjwP = 0;
        for (int o64 = 0; o64 < gG4; o64++) if (c[o64] == o) yjwP = 1;
        if (!yjwP) { c[gG4] = o; gG4++; }
        ja6o++;
    }
    return gG4;
}