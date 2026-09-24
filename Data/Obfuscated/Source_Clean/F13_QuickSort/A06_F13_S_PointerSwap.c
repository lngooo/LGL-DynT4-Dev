void CV7(int jXm[], int bW, int MKN) {
    if (bW >= MKN) return;
    int *Mo = jXm + MKN;
    int *Rb = jXm + bW;
    for (int *fSX = jXm + bW; fSX < Mo; fSX++) {
        if (*fSX < *Mo) {
            int iG2M = *fSX; *fSX = *Rb; *Rb = iG2M;
            Rb++;
        }
    }
    int iG2M = *Rb; *Rb = *Mo; *Mo = iG2M;
    CV7(jXm, bW, (int)(Rb - jXm) - 1);
    CV7(jXm, (int)(Rb - jXm) + 1, MKN);
}