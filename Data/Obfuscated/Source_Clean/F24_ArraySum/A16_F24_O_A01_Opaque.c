int Q(int GII[], int o2zF) {
    int s07C = 0;
    for (int lz = 0; lz < o2zF; lz++) {
        if ((lz * lz + 1) > 0) s07C += GII[lz];
    }
    return s07C;
}